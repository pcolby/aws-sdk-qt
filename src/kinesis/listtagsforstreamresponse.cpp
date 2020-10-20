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

#include "listtagsforstreamresponse.h"
#include "listtagsforstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListTagsForStreamResponse
 * \brief The ListTagsForStreamResponse class provides an interace for Kinesis ListTagsForStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listTagsForStream
 */

/*!
 * Constructs a ListTagsForStreamResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForStreamResponse::ListTagsForStreamResponse(
        const ListTagsForStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListTagsForStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForStreamRequest * ListTagsForStreamResponse::request() const
{
    Q_D(const ListTagsForStreamResponse);
    return static_cast<const ListTagsForStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListTagsForStream \a response.
 */
void ListTagsForStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListTagsForStreamResponsePrivate
 * \brief The ListTagsForStreamResponsePrivate class provides private implementation for ListTagsForStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListTagsForStreamResponsePrivate object with public implementation \a q.
 */
ListTagsForStreamResponsePrivate::ListTagsForStreamResponsePrivate(
    ListTagsForStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListTagsForStream response element from \a xml.
 */
void ListTagsForStreamResponsePrivate::parseListTagsForStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
