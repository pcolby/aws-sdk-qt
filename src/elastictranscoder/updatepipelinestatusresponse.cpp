// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelinestatusresponse.h"
#include "updatepipelinestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineStatusResponse
 * \brief The UpdatePipelineStatusResponse class provides an interace for ElasticTranscoder UpdatePipelineStatus responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipelineStatus
 */

/*!
 * Constructs a UpdatePipelineStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePipelineStatusResponse::UpdatePipelineStatusResponse(
        const UpdatePipelineStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineStatusResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePipelineStatusRequest * UpdatePipelineStatusResponse::request() const
{
    Q_D(const UpdatePipelineStatusResponse);
    return static_cast<const UpdatePipelineStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder UpdatePipelineStatus \a response.
 */
void UpdatePipelineStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePipelineStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineStatusResponsePrivate
 * \brief The UpdatePipelineStatusResponsePrivate class provides private implementation for UpdatePipelineStatusResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a UpdatePipelineStatusResponsePrivate object with public implementation \a q.
 */
UpdatePipelineStatusResponsePrivate::UpdatePipelineStatusResponsePrivate(
    UpdatePipelineStatusResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder UpdatePipelineStatus response element from \a xml.
 */
void UpdatePipelineStatusResponsePrivate::parseUpdatePipelineStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
