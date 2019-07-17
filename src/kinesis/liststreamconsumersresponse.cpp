/*
    Copyright 2013-2019 Paul Colby

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

#include "liststreamconsumersresponse.h"
#include "liststreamconsumersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamConsumersResponse
 * \brief The ListStreamConsumersResponse class provides an interace for Kinesis ListStreamConsumers responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreamConsumers
 */

/*!
 * Constructs a ListStreamConsumersResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamConsumersResponse::ListStreamConsumersResponse(
        const ListStreamConsumersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListStreamConsumersResponsePrivate(this), parent)
{
    setRequest(new ListStreamConsumersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamConsumersRequest * ListStreamConsumersResponse::request() const
{
    Q_D(const ListStreamConsumersResponse);
    return static_cast<const ListStreamConsumersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis ListStreamConsumers \a response.
 */
void ListStreamConsumersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamConsumersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::ListStreamConsumersResponsePrivate
 * \brief The ListStreamConsumersResponsePrivate class provides private implementation for ListStreamConsumersResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListStreamConsumersResponsePrivate object with public implementation \a q.
 */
ListStreamConsumersResponsePrivate::ListStreamConsumersResponsePrivate(
    ListStreamConsumersResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis ListStreamConsumers response element from \a xml.
 */
void ListStreamConsumersResponsePrivate::parseListStreamConsumersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamConsumersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
