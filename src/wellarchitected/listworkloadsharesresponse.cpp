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

#include "listworkloadsharesresponse.h"
#include "listworkloadsharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesResponse
 * \brief The ListWorkloadSharesResponse class provides an interace for WellArchitected ListWorkloadShares responses.
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
 * \sa WellArchitectedClient::listWorkloadShares
 */

/*!
 * Constructs a ListWorkloadSharesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkloadSharesResponse::ListWorkloadSharesResponse(
        const ListWorkloadSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListWorkloadSharesResponsePrivate(this), parent)
{
    setRequest(new ListWorkloadSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkloadSharesRequest * ListWorkloadSharesResponse::request() const
{
    Q_D(const ListWorkloadSharesResponse);
    return static_cast<const ListWorkloadSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListWorkloadShares \a response.
 */
void ListWorkloadSharesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkloadSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListWorkloadSharesResponsePrivate
 * \brief The ListWorkloadSharesResponsePrivate class provides private implementation for ListWorkloadSharesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListWorkloadSharesResponsePrivate object with public implementation \a q.
 */
ListWorkloadSharesResponsePrivate::ListWorkloadSharesResponsePrivate(
    ListWorkloadSharesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListWorkloadShares response element from \a xml.
 */
void ListWorkloadSharesResponsePrivate::parseListWorkloadSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkloadSharesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
