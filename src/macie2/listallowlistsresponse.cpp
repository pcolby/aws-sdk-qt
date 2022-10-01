// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listallowlistsresponse.h"
#include "listallowlistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListAllowListsResponse
 * \brief The ListAllowListsResponse class provides an interace for Macie2 ListAllowLists responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listAllowLists
 */

/*!
 * Constructs a ListAllowListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAllowListsResponse::ListAllowListsResponse(
        const ListAllowListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new ListAllowListsResponsePrivate(this), parent)
{
    setRequest(new ListAllowListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAllowListsRequest * ListAllowListsResponse::request() const
{
    Q_D(const ListAllowListsResponse);
    return static_cast<const ListAllowListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 ListAllowLists \a response.
 */
void ListAllowListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAllowListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::ListAllowListsResponsePrivate
 * \brief The ListAllowListsResponsePrivate class provides private implementation for ListAllowListsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListAllowListsResponsePrivate object with public implementation \a q.
 */
ListAllowListsResponsePrivate::ListAllowListsResponsePrivate(
    ListAllowListsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 ListAllowLists response element from \a xml.
 */
void ListAllowListsResponsePrivate::parseListAllowListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAllowListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
