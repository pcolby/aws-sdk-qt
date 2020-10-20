/*
    Copyright 2013-2020 Paul Colby

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
