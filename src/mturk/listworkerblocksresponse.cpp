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

#include "listworkerblocksresponse.h"
#include "listworkerblocksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkerBlocksResponse
 * \brief The ListWorkerBlocksResponse class provides an interace for MTurk ListWorkerBlocks responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkerBlocks
 */

/*!
 * Constructs a ListWorkerBlocksResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkerBlocksResponse::ListWorkerBlocksResponse(
        const ListWorkerBlocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkerBlocksResponsePrivate(this), parent)
{
    setRequest(new ListWorkerBlocksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkerBlocksRequest * ListWorkerBlocksResponse::request() const
{
    Q_D(const ListWorkerBlocksResponse);
    return static_cast<const ListWorkerBlocksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListWorkerBlocks \a response.
 */
void ListWorkerBlocksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkerBlocksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListWorkerBlocksResponsePrivate
 * \brief The ListWorkerBlocksResponsePrivate class provides private implementation for ListWorkerBlocksResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkerBlocksResponsePrivate object with public implementation \a q.
 */
ListWorkerBlocksResponsePrivate::ListWorkerBlocksResponsePrivate(
    ListWorkerBlocksResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListWorkerBlocks response element from \a xml.
 */
void ListWorkerBlocksResponsePrivate::parseListWorkerBlocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkerBlocksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
