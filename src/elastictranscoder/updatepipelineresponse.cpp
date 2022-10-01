// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelineresponse.h"
#include "updatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineResponse
 * \brief The UpdatePipelineResponse class provides an interace for ElasticTranscoder UpdatePipeline responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipeline
 */

/*!
 * Constructs a UpdatePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePipelineResponse::UpdatePipelineResponse(
        const UpdatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePipelineRequest * UpdatePipelineResponse::request() const
{
    Q_D(const UpdatePipelineResponse);
    return static_cast<const UpdatePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder UpdatePipeline \a response.
 */
void UpdatePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineResponsePrivate
 * \brief The UpdatePipelineResponsePrivate class provides private implementation for UpdatePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a UpdatePipelineResponsePrivate object with public implementation \a q.
 */
UpdatePipelineResponsePrivate::UpdatePipelineResponsePrivate(
    UpdatePipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder UpdatePipeline response element from \a xml.
 */
void UpdatePipelineResponsePrivate::parseUpdatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
