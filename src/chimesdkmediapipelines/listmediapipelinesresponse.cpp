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
