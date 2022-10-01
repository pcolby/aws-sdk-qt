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

#include "getmediapipelineresponse.h"
#include "getmediapipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaPipelineResponse
 * \brief The GetMediaPipelineResponse class provides an interace for ChimeSdkMediaPipelines GetMediaPipeline responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::getMediaPipeline
 */

/*!
 * Constructs a GetMediaPipelineResponse object for \a reply to \a request, with parent \a parent.
 */
GetMediaPipelineResponse::GetMediaPipelineResponse(
        const GetMediaPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new GetMediaPipelineResponsePrivate(this), parent)
{
    setRequest(new GetMediaPipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMediaPipelineRequest * GetMediaPipelineResponse::request() const
{
    Q_D(const GetMediaPipelineResponse);
    return static_cast<const GetMediaPipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines GetMediaPipeline \a response.
 */
void GetMediaPipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMediaPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaPipelineResponsePrivate
 * \brief The GetMediaPipelineResponsePrivate class provides private implementation for GetMediaPipelineResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a GetMediaPipelineResponsePrivate object with public implementation \a q.
 */
GetMediaPipelineResponsePrivate::GetMediaPipelineResponsePrivate(
    GetMediaPipelineResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines GetMediaPipeline response element from \a xml.
 */
void GetMediaPipelineResponsePrivate::parseGetMediaPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaPipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
