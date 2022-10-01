// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemediacapturepipelineresponse.h"
#include "deletemediacapturepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaCapturePipelineResponse
 * \brief The DeleteMediaCapturePipelineResponse class provides an interace for ChimeSdkMediaPipelines DeleteMediaCapturePipeline responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::deleteMediaCapturePipeline
 */

/*!
 * Constructs a DeleteMediaCapturePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMediaCapturePipelineResponse::DeleteMediaCapturePipelineResponse(
        const DeleteMediaCapturePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new DeleteMediaCapturePipelineResponsePrivate(this), parent)
{
    setRequest(new DeleteMediaCapturePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMediaCapturePipelineRequest * DeleteMediaCapturePipelineResponse::request() const
{
    Q_D(const DeleteMediaCapturePipelineResponse);
    return static_cast<const DeleteMediaCapturePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines DeleteMediaCapturePipeline \a response.
 */
void DeleteMediaCapturePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMediaCapturePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::DeleteMediaCapturePipelineResponsePrivate
 * \brief The DeleteMediaCapturePipelineResponsePrivate class provides private implementation for DeleteMediaCapturePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a DeleteMediaCapturePipelineResponsePrivate object with public implementation \a q.
 */
DeleteMediaCapturePipelineResponsePrivate::DeleteMediaCapturePipelineResponsePrivate(
    DeleteMediaCapturePipelineResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines DeleteMediaCapturePipeline response element from \a xml.
 */
void DeleteMediaCapturePipelineResponsePrivate::parseDeleteMediaCapturePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMediaCapturePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
