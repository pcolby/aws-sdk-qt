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

#include "listjobsbypipelineresponse.h"
#include "listjobsbypipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByPipelineResponse
 * \brief The ListJobsByPipelineResponse class provides an interace for ElasticTranscoder ListJobsByPipeline responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listJobsByPipeline
 */

/*!
 * Constructs a ListJobsByPipelineResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobsByPipelineResponse::ListJobsByPipelineResponse(
        const ListJobsByPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListJobsByPipelineResponsePrivate(this), parent)
{
    setRequest(new ListJobsByPipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobsByPipelineRequest * ListJobsByPipelineResponse::request() const
{
    Q_D(const ListJobsByPipelineResponse);
    return static_cast<const ListJobsByPipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ListJobsByPipeline \a response.
 */
void ListJobsByPipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobsByPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByPipelineResponsePrivate
 * \brief The ListJobsByPipelineResponsePrivate class provides private implementation for ListJobsByPipelineResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListJobsByPipelineResponsePrivate object with public implementation \a q.
 */
ListJobsByPipelineResponsePrivate::ListJobsByPipelineResponsePrivate(
    ListJobsByPipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ListJobsByPipeline response element from \a xml.
 */
void ListJobsByPipelineResponsePrivate::parseListJobsByPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsByPipelineResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
