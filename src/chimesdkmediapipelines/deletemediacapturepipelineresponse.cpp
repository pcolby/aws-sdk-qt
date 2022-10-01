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
