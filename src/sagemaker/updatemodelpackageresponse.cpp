// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelpackageresponse.h"
#include "updatemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateModelPackageResponse
 * \brief The UpdateModelPackageResponse class provides an interace for SageMaker UpdateModelPackage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::updateModelPackage
 */

/*!
 * Constructs a UpdateModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelPackageResponse::UpdateModelPackageResponse(
        const UpdateModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateModelPackageResponsePrivate(this), parent)
{
    setRequest(new UpdateModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelPackageRequest * UpdateModelPackageResponse::request() const
{
    Q_D(const UpdateModelPackageResponse);
    return static_cast<const UpdateModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateModelPackage \a response.
 */
void UpdateModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateModelPackageResponsePrivate
 * \brief The UpdateModelPackageResponsePrivate class provides private implementation for UpdateModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateModelPackageResponsePrivate object with public implementation \a q.
 */
UpdateModelPackageResponsePrivate::UpdateModelPackageResponsePrivate(
    UpdateModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateModelPackage response element from \a xml.
 */
void UpdateModelPackageResponsePrivate::parseUpdateModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
