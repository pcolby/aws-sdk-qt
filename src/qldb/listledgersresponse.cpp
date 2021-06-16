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

#include "listledgersresponse.h"
#include "listledgersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListLedgersResponse
 * \brief The ListLedgersResponse class provides an interace for QLDB ListLedgers responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listLedgers
 */

/*!
 * Constructs a ListLedgersResponse object for \a reply to \a request, with parent \a parent.
 */
ListLedgersResponse::ListLedgersResponse(
        const ListLedgersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListLedgersResponsePrivate(this), parent)
{
    setRequest(new ListLedgersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLedgersRequest * ListLedgersResponse::request() const
{
    Q_D(const ListLedgersResponse);
    return static_cast<const ListLedgersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QLDB ListLedgers \a response.
 */
void ListLedgersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLedgersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::ListLedgersResponsePrivate
 * \brief The ListLedgersResponsePrivate class provides private implementation for ListLedgersResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ListLedgersResponsePrivate object with public implementation \a q.
 */
ListLedgersResponsePrivate::ListLedgersResponsePrivate(
    ListLedgersResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB ListLedgers response element from \a xml.
 */
void ListLedgersResponsePrivate::parseListLedgersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLedgersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
