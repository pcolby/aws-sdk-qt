// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
