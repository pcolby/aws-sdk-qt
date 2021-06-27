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

#include "listqueuesresponse.h"
#include "listqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListQueuesResponse
 * \brief The ListQueuesResponse class provides an interace for MediaConvert ListQueues responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listQueues
 */

/*!
 * Constructs a ListQueuesResponse object for \a reply to \a request, with parent \a parent.
 */
ListQueuesResponse::ListQueuesResponse(
        const ListQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListQueuesResponsePrivate(this), parent)
{
    setRequest(new ListQueuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQueuesRequest * ListQueuesResponse::request() const
{
    return static_cast<const ListQueuesRequest *>(MediaConvertResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListQueues \a response.
 */
void ListQueuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListQueuesResponsePrivate
 * \brief The ListQueuesResponsePrivate class provides private implementation for ListQueuesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListQueuesResponsePrivate object with public implementation \a q.
 */
ListQueuesResponsePrivate::ListQueuesResponsePrivate(
    ListQueuesResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListQueues response element from \a xml.
 */
void ListQueuesResponsePrivate::parseListQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
