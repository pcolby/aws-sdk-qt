// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdelegatedadminaccountsresponse.h"
#include "listdelegatedadminaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListDelegatedAdminAccountsResponse
 * \brief The ListDelegatedAdminAccountsResponse class provides an interace for Inspector2 ListDelegatedAdminAccounts responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listDelegatedAdminAccounts
 */

/*!
 * Constructs a ListDelegatedAdminAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDelegatedAdminAccountsResponse::ListDelegatedAdminAccountsResponse(
        const ListDelegatedAdminAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListDelegatedAdminAccountsResponsePrivate(this), parent)
{
    setRequest(new ListDelegatedAdminAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDelegatedAdminAccountsRequest * ListDelegatedAdminAccountsResponse::request() const
{
    Q_D(const ListDelegatedAdminAccountsResponse);
    return static_cast<const ListDelegatedAdminAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListDelegatedAdminAccounts \a response.
 */
void ListDelegatedAdminAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDelegatedAdminAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListDelegatedAdminAccountsResponsePrivate
 * \brief The ListDelegatedAdminAccountsResponsePrivate class provides private implementation for ListDelegatedAdminAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListDelegatedAdminAccountsResponsePrivate object with public implementation \a q.
 */
ListDelegatedAdminAccountsResponsePrivate::ListDelegatedAdminAccountsResponsePrivate(
    ListDelegatedAdminAccountsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListDelegatedAdminAccounts response element from \a xml.
 */
void ListDelegatedAdminAccountsResponsePrivate::parseListDelegatedAdminAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDelegatedAdminAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
