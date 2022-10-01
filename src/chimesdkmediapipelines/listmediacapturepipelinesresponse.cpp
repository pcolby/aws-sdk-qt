// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmediacapturepipelinesresponse.h"
#include "listmediacapturepipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaCapturePipelinesResponse
 * \brief The ListMediaCapturePipelinesResponse class provides an interace for ChimeSdkMediaPipelines ListMediaCapturePipelines responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::listMediaCapturePipelines
 */

/*!
 * Constructs a ListMediaCapturePipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMediaCapturePipelinesResponse::ListMediaCapturePipelinesResponse(
        const ListMediaCapturePipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new ListMediaCapturePipelinesResponsePrivate(this), parent)
{
    setRequest(new ListMediaCapturePipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMediaCapturePipelinesRequest * ListMediaCapturePipelinesResponse::request() const
{
    Q_D(const ListMediaCapturePipelinesResponse);
    return static_cast<const ListMediaCapturePipelinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines ListMediaCapturePipelines \a response.
 */
void ListMediaCapturePipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMediaCapturePipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaCapturePipelinesResponsePrivate
 * \brief The ListMediaCapturePipelinesResponsePrivate class provides private implementation for ListMediaCapturePipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ListMediaCapturePipelinesResponsePrivate object with public implementation \a q.
 */
ListMediaCapturePipelinesResponsePrivate::ListMediaCapturePipelinesResponsePrivate(
    ListMediaCapturePipelinesResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines ListMediaCapturePipelines response element from \a xml.
 */
void ListMediaCapturePipelinesResponsePrivate::parseListMediaCapturePipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMediaCapturePipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
