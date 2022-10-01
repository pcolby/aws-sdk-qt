// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepipelineresponse.h"
#include "deletepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::DeletePipelineResponse
 * \brief The DeletePipelineResponse class provides an interace for ElasticTranscoder DeletePipeline responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::deletePipeline
 */

/*!
 * Constructs a DeletePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePipelineResponse::DeletePipelineResponse(
        const DeletePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new DeletePipelineResponsePrivate(this), parent)
{
    setRequest(new DeletePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePipelineRequest * DeletePipelineResponse::request() const
{
    Q_D(const DeletePipelineResponse);
    return static_cast<const DeletePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder DeletePipeline \a response.
 */
void DeletePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::DeletePipelineResponsePrivate
 * \brief The DeletePipelineResponsePrivate class provides private implementation for DeletePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a DeletePipelineResponsePrivate object with public implementation \a q.
 */
DeletePipelineResponsePrivate::DeletePipelineResponsePrivate(
    DeletePipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder DeletePipeline response element from \a xml.
 */
void DeletePipelineResponsePrivate::parseDeletePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
