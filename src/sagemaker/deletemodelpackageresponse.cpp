// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelpackageresponse.h"
#include "deletemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageResponse
 * \brief The DeleteModelPackageResponse class provides an interace for SageMaker DeleteModelPackage responses.
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
 * \sa SageMakerClient::deleteModelPackage
 */

/*!
 * Constructs a DeleteModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelPackageResponse::DeleteModelPackageResponse(
        const DeleteModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelPackageResponsePrivate(this), parent)
{
    setRequest(new DeleteModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelPackageRequest * DeleteModelPackageResponse::request() const
{
    Q_D(const DeleteModelPackageResponse);
    return static_cast<const DeleteModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelPackage \a response.
 */
void DeleteModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageResponsePrivate
 * \brief The DeleteModelPackageResponsePrivate class provides private implementation for DeleteModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageResponsePrivate object with public implementation \a q.
 */
DeleteModelPackageResponsePrivate::DeleteModelPackageResponsePrivate(
    DeleteModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelPackage response element from \a xml.
 */
void DeleteModelPackageResponsePrivate::parseDeleteModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
