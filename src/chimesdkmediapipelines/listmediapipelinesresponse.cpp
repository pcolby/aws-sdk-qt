// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmediapipelinesresponse.h"
#include "listmediapipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaPipelinesResponse
 * \brief The ListMediaPipelinesResponse class provides an interace for ChimeSdkMediaPipelines ListMediaPipelines responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::listMediaPipelines
 */

/*!
 * Constructs a ListMediaPipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMediaPipelinesResponse::ListMediaPipelinesResponse(
        const ListMediaPipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMediaPipelinesResponse(new ListMediaPipelinesResponsePrivate(this), parent)
{
    setRequest(new ListMediaPipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMediaPipelinesRequest * ListMediaPipelinesResponse::request() const
{
    Q_D(const ListMediaPipelinesResponse);
    return static_cast<const ListMediaPipelinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMediaPipelines ListMediaPipelines \a response.
 */
void ListMediaPipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMediaPipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaPipelinesResponsePrivate
 * \brief The ListMediaPipelinesResponsePrivate class provides private implementation for ListMediaPipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ListMediaPipelinesResponsePrivate object with public implementation \a q.
 */
ListMediaPipelinesResponsePrivate::ListMediaPipelinesResponsePrivate(
    ListMediaPipelinesResponse * const q) : ChimeSdkMediaPipelinesResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMediaPipelines ListMediaPipelines response element from \a xml.
 */
void ListMediaPipelinesResponsePrivate::parseListMediaPipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMediaPipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
