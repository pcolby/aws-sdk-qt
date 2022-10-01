// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelpackageresponse.h"
#include "createmodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageResponse
 * \brief The CreateModelPackageResponse class provides an interace for SageMaker CreateModelPackage responses.
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
 * \sa SageMakerClient::createModelPackage
 */

/*!
 * Constructs a CreateModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelPackageResponse::CreateModelPackageResponse(
        const CreateModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelPackageResponsePrivate(this), parent)
{
    setRequest(new CreateModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelPackageRequest * CreateModelPackageResponse::request() const
{
    Q_D(const CreateModelPackageResponse);
    return static_cast<const CreateModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelPackage \a response.
 */
void CreateModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageResponsePrivate
 * \brief The CreateModelPackageResponsePrivate class provides private implementation for CreateModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageResponsePrivate object with public implementation \a q.
 */
CreateModelPackageResponsePrivate::CreateModelPackageResponsePrivate(
    CreateModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelPackage response element from \a xml.
 */
void CreateModelPackageResponsePrivate::parseCreateModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
