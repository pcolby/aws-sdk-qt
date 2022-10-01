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

#include "updatefeaturegroupresponse.h"
#include "updatefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupResponse
 * \brief The UpdateFeatureGroupResponse class provides an interace for SageMaker UpdateFeatureGroup responses.
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
 * \sa SageMakerClient::updateFeatureGroup
 */

/*!
 * Constructs a UpdateFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFeatureGroupResponse::UpdateFeatureGroupResponse(
        const UpdateFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFeatureGroupRequest * UpdateFeatureGroupResponse::request() const
{
    Q_D(const UpdateFeatureGroupResponse);
    return static_cast<const UpdateFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateFeatureGroup \a response.
 */
void UpdateFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateFeatureGroupResponsePrivate
 * \brief The UpdateFeatureGroupResponsePrivate class provides private implementation for UpdateFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateFeatureGroupResponsePrivate object with public implementation \a q.
 */
UpdateFeatureGroupResponsePrivate::UpdateFeatureGroupResponsePrivate(
    UpdateFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateFeatureGroup response element from \a xml.
 */
void UpdateFeatureGroupResponsePrivate::parseUpdateFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
