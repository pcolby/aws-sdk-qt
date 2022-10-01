// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelpackagegroupresponse.h"
#include "createmodelpackagegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageGroupResponse
 * \brief The CreateModelPackageGroupResponse class provides an interace for SageMaker CreateModelPackageGroup responses.
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
 * \sa SageMakerClient::createModelPackageGroup
 */

/*!
 * Constructs a CreateModelPackageGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelPackageGroupResponse::CreateModelPackageGroupResponse(
        const CreateModelPackageGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelPackageGroupResponsePrivate(this), parent)
{
    setRequest(new CreateModelPackageGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelPackageGroupRequest * CreateModelPackageGroupResponse::request() const
{
    Q_D(const CreateModelPackageGroupResponse);
    return static_cast<const CreateModelPackageGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateModelPackageGroup \a response.
 */
void CreateModelPackageGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelPackageGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageGroupResponsePrivate
 * \brief The CreateModelPackageGroupResponsePrivate class provides private implementation for CreateModelPackageGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageGroupResponsePrivate object with public implementation \a q.
 */
CreateModelPackageGroupResponsePrivate::CreateModelPackageGroupResponsePrivate(
    CreateModelPackageGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateModelPackageGroup response element from \a xml.
 */
void CreateModelPackageGroupResponsePrivate::parseCreateModelPackageGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelPackageGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
