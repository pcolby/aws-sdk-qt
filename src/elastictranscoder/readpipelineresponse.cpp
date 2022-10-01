// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "readpipelineresponse.h"
#include "readpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadPipelineResponse
 * \brief The ReadPipelineResponse class provides an interace for ElasticTranscoder ReadPipeline responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readPipeline
 */

/*!
 * Constructs a ReadPipelineResponse object for \a reply to \a request, with parent \a parent.
 */
ReadPipelineResponse::ReadPipelineResponse(
        const ReadPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadPipelineResponsePrivate(this), parent)
{
    setRequest(new ReadPipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReadPipelineRequest * ReadPipelineResponse::request() const
{
    Q_D(const ReadPipelineResponse);
    return static_cast<const ReadPipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ReadPipeline \a response.
 */
void ReadPipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReadPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ReadPipelineResponsePrivate
 * \brief The ReadPipelineResponsePrivate class provides private implementation for ReadPipelineResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadPipelineResponsePrivate object with public implementation \a q.
 */
ReadPipelineResponsePrivate::ReadPipelineResponsePrivate(
    ReadPipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ReadPipeline response element from \a xml.
 */
void ReadPipelineResponsePrivate::parseReadPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadPipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
