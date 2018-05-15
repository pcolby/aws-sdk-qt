/*
    Copyright 2013-2018 Paul Colby

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

#include "listshardsresponse.h"
#include "listshardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListShardsResponse
 * \brief The ListShardsResponse class provides an interace for Kinesis ListShards responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listShards
 */

/*!
 * Constructs a ListShardsResponse object for \a reply to \a request, with parent \a parent.
 */
ListShardsResponse::ListShardsResponse(
        const ListShardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListShardsResponsePrivate(this), parent)
{
    setRequest(new ListShardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListShardsRequest * ListShardsResponse::request() const
{
    Q_D(const ListShardsResponse);
    return static_cast<const ListShardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListShards \a response.
 */
void ListShardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListShardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListShardsResponsePrivate
 * \brief The ListShardsResponsePrivate class provides private implementation for ListShardsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListShardsResponsePrivate object with public implementation \a q.
 */
ListShardsResponsePrivate::ListShardsResponsePrivate(
    ListShardsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListShards response element from \a xml.
 */
void ListShardsResponsePrivate::parseListShardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListShardsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
