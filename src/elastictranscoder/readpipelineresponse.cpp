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
    return static_cast<const ReadPipelineRequest *>(ElasticTranscoderResponse::request());
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
