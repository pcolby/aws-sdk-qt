// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
