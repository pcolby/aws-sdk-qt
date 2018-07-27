/*
    Copyright 2013-2018 Paul Colby

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

#include "updatepipelinenotificationsresponse.h"
#include "updatepipelinenotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineNotificationsResponse
 * \brief The UpdatePipelineNotificationsResponse class provides an interace for ElasticTranscoder UpdatePipelineNotifications responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipelineNotifications
 */

/*!
 * Constructs a UpdatePipelineNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePipelineNotificationsResponse::UpdatePipelineNotificationsResponse(
        const UpdatePipelineNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineNotificationsResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePipelineNotificationsRequest * UpdatePipelineNotificationsResponse::request() const
{
    Q_D(const UpdatePipelineNotificationsResponse);
    return static_cast<const UpdatePipelineNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder UpdatePipelineNotifications \a response.
 */
void UpdatePipelineNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePipelineNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineNotificationsResponsePrivate
 * \brief The UpdatePipelineNotificationsResponsePrivate class provides private implementation for UpdatePipelineNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a UpdatePipelineNotificationsResponsePrivate object with public implementation \a q.
 */
UpdatePipelineNotificationsResponsePrivate::UpdatePipelineNotificationsResponsePrivate(
    UpdatePipelineNotificationsResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder UpdatePipelineNotifications response element from \a xml.
 */
void UpdatePipelineNotificationsResponsePrivate::parseUpdatePipelineNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
