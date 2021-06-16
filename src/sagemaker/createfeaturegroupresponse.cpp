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

#include "createfeaturegroupresponse.h"
#include "createfeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupResponse
 * \brief The CreateFeatureGroupResponse class provides an interace for SageMaker CreateFeatureGroup responses.
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
 * \sa SageMakerClient::createFeatureGroup
 */

/*!
 * Constructs a CreateFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFeatureGroupResponse::CreateFeatureGroupResponse(
        const CreateFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new CreateFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFeatureGroupRequest * CreateFeatureGroupResponse::request() const
{
    Q_D(const CreateFeatureGroupResponse);
    return static_cast<const CreateFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateFeatureGroup \a response.
 */
void CreateFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupResponsePrivate
 * \brief The CreateFeatureGroupResponsePrivate class provides private implementation for CreateFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateFeatureGroupResponsePrivate object with public implementation \a q.
 */
CreateFeatureGroupResponsePrivate::CreateFeatureGroupResponsePrivate(
    CreateFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateFeatureGroup response element from \a xml.
 */
void CreateFeatureGroupResponsePrivate::parseCreateFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
