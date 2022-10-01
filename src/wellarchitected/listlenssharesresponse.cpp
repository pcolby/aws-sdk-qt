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

#include "listlenssharesresponse.h"
#include "listlenssharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensSharesResponse
 * \brief The ListLensSharesResponse class provides an interace for WellArchitected ListLensShares responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listLensShares
 */

/*!
 * Constructs a ListLensSharesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLensSharesResponse::ListLensSharesResponse(
        const ListLensSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListLensSharesResponsePrivate(this), parent)
{
    setRequest(new ListLensSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLensSharesRequest * ListLensSharesResponse::request() const
{
    Q_D(const ListLensSharesResponse);
    return static_cast<const ListLensSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListLensShares \a response.
 */
void ListLensSharesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLensSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListLensSharesResponsePrivate
 * \brief The ListLensSharesResponsePrivate class provides private implementation for ListLensSharesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensSharesResponsePrivate object with public implementation \a q.
 */
ListLensSharesResponsePrivate::ListLensSharesResponsePrivate(
    ListLensSharesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListLensShares response element from \a xml.
 */
void ListLensSharesResponsePrivate::parseListLensSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLensSharesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
