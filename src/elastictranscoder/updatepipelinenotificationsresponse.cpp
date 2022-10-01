// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
