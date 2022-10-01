// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmediacapturepipelineresponse.h"
#include "createmediacapturepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaCapturePipelineResponse
 * \brief The CreateMediaCapturePipelineResponse class provides an interace for ChimeSdkMediaPipelines CreateMediaCapturePipeline responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::createMediaCapturePipeline
 */

/*!
 * Constructs a CreateMediaCapturePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMediaCapturePipelineResponse::CreateMediaCapturePipelineResponse(
        const CreateMediaCapturePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new CreateMediaCapturePipelineResponsePrivate(this), parent)
{
    setRequest(new CreateMediaCapturePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMediaCapturePipelineRequest * CreateMediaCapturePipelineResponse::request() const
{
    Q_D(const CreateMediaCapturePipelineResponse);
    return static_cast<const CreateMediaCapturePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines CreateMediaCapturePipeline \a response.
 */
void CreateMediaCapturePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMediaCapturePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::CreateMediaCapturePipelineResponsePrivate
 * \brief The CreateMediaCapturePipelineResponsePrivate class provides private implementation for CreateMediaCapturePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a CreateMediaCapturePipelineResponsePrivate object with public implementation \a q.
 */
CreateMediaCapturePipelineResponsePrivate::CreateMediaCapturePipelineResponsePrivate(
    CreateMediaCapturePipelineResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines CreateMediaCapturePipeline response element from \a xml.
 */
void CreateMediaCapturePipelineResponsePrivate::parseCreateMediaCapturePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMediaCapturePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
