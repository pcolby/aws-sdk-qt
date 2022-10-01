// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmediacapturepipelineresponse.h"
#include "getmediacapturepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaCapturePipelineResponse
 * \brief The GetMediaCapturePipelineResponse class provides an interace for ChimeSdkMediaPipelines GetMediaCapturePipeline responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::getMediaCapturePipeline
 */

/*!
 * Constructs a GetMediaCapturePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
GetMediaCapturePipelineResponse::GetMediaCapturePipelineResponse(
        const GetMediaCapturePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new GetMediaCapturePipelineResponsePrivate(this), parent)
{
    setRequest(new GetMediaCapturePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMediaCapturePipelineRequest * GetMediaCapturePipelineResponse::request() const
{
    Q_D(const GetMediaCapturePipelineResponse);
    return static_cast<const GetMediaCapturePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines GetMediaCapturePipeline \a response.
 */
void GetMediaCapturePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMediaCapturePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::GetMediaCapturePipelineResponsePrivate
 * \brief The GetMediaCapturePipelineResponsePrivate class provides private implementation for GetMediaCapturePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a GetMediaCapturePipelineResponsePrivate object with public implementation \a q.
 */
GetMediaCapturePipelineResponsePrivate::GetMediaCapturePipelineResponsePrivate(
    GetMediaCapturePipelineResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines GetMediaCapturePipeline response element from \a xml.
 */
void GetMediaCapturePipelineResponsePrivate::parseGetMediaCapturePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaCapturePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
