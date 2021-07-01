/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
