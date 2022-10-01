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

#include "createmediaconcatenationpipelineresponse.h"
#include "createmediaconcatenationpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaConcatenationPipelineResponse
 * \brief The CreateMediaConcatenationPipelineResponse class provides an interace for ChimeSdkMediaPipelines CreateMediaConcatenationPipeline responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::createMediaConcatenationPipeline
 */

/*!
 * Constructs a CreateMediaConcatenationPipelineResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMediaConcatenationPipelineResponse::CreateMediaConcatenationPipelineResponse(
        const CreateMediaConcatenationPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new CreateMediaConcatenationPipelineResponsePrivate(this), parent)
{
    setRequest(new CreateMediaConcatenationPipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMediaConcatenationPipelineRequest * CreateMediaConcatenationPipelineResponse::request() const
{
    Q_D(const CreateMediaConcatenationPipelineResponse);
    return static_cast<const CreateMediaConcatenationPipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines CreateMediaConcatenationPipeline \a response.
 */
void CreateMediaConcatenationPipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMediaConcatenationPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaConcatenationPipelineResponsePrivate
 * \brief The CreateMediaConcatenationPipelineResponsePrivate class provides private implementation for CreateMediaConcatenationPipelineResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a CreateMediaConcatenationPipelineResponsePrivate object with public implementation \a q.
 */
CreateMediaConcatenationPipelineResponsePrivate::CreateMediaConcatenationPipelineResponsePrivate(
    CreateMediaConcatenationPipelineResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines CreateMediaConcatenationPipeline response element from \a xml.
 */
void CreateMediaConcatenationPipelineResponsePrivate::parseCreateMediaConcatenationPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMediaConcatenationPipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
