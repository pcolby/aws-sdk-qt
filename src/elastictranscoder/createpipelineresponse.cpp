// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpipelineresponse.h"
#include "createpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CreatePipelineResponse
 * \brief The CreatePipelineResponse class provides an interace for ElasticTranscoder CreatePipeline responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::createPipeline
 */

/*!
 * Constructs a CreatePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePipelineResponse::CreatePipelineResponse(
        const CreatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new CreatePipelineResponsePrivate(this), parent)
{
    setRequest(new CreatePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePipelineRequest * CreatePipelineResponse::request() const
{
    Q_D(const CreatePipelineResponse);
    return static_cast<const CreatePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder CreatePipeline \a response.
 */
void CreatePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::CreatePipelineResponsePrivate
 * \brief The CreatePipelineResponsePrivate class provides private implementation for CreatePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CreatePipelineResponsePrivate object with public implementation \a q.
 */
CreatePipelineResponsePrivate::CreatePipelineResponsePrivate(
    CreatePipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder CreatePipeline response element from \a xml.
 */
void CreatePipelineResponsePrivate::parseCreatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
