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

#include "deletefeaturegroupresponse.h"
#include "deletefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupResponse
 * \brief The DeleteFeatureGroupResponse class provides an interace for SageMaker DeleteFeatureGroup responses.
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
 * \sa SageMakerClient::deleteFeatureGroup
 */

/*!
 * Constructs a DeleteFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFeatureGroupResponse::DeleteFeatureGroupResponse(
        const DeleteFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFeatureGroupRequest * DeleteFeatureGroupResponse::request() const
{
    Q_D(const DeleteFeatureGroupResponse);
    return static_cast<const DeleteFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteFeatureGroup \a response.
 */
void DeleteFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteFeatureGroupResponsePrivate
 * \brief The DeleteFeatureGroupResponsePrivate class provides private implementation for DeleteFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteFeatureGroupResponsePrivate object with public implementation \a q.
 */
DeleteFeatureGroupResponsePrivate::DeleteFeatureGroupResponsePrivate(
    DeleteFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteFeatureGroup response element from \a xml.
 */
void DeleteFeatureGroupResponsePrivate::parseDeleteFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
