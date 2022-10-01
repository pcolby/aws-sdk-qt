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

#include "liststagingaccountsresponse.h"
#include "liststagingaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListStagingAccountsResponse
 * \brief The ListStagingAccountsResponse class provides an interace for Drs ListStagingAccounts responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listStagingAccounts
 */

/*!
 * Constructs a ListStagingAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStagingAccountsResponse::ListStagingAccountsResponse(
        const ListStagingAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new ListStagingAccountsResponsePrivate(this), parent)
{
    setRequest(new ListStagingAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStagingAccountsRequest * ListStagingAccountsResponse::request() const
{
    Q_D(const ListStagingAccountsResponse);
    return static_cast<const ListStagingAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs ListStagingAccounts \a response.
 */
void ListStagingAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStagingAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::ListStagingAccountsResponsePrivate
 * \brief The ListStagingAccountsResponsePrivate class provides private implementation for ListStagingAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListStagingAccountsResponsePrivate object with public implementation \a q.
 */
ListStagingAccountsResponsePrivate::ListStagingAccountsResponsePrivate(
    ListStagingAccountsResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs ListStagingAccounts response element from \a xml.
 */
void ListStagingAccountsResponsePrivate::parseListStagingAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStagingAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
