// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmanageddataidentifiersresponse.h"
#include "listmanageddataidentifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListManagedDataIdentifiersResponse
 * \brief The ListManagedDataIdentifiersResponse class provides an interace for Macie2 ListManagedDataIdentifiers responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listManagedDataIdentifiers
 */

/*!
 * Constructs a ListManagedDataIdentifiersResponse object for \a reply to \a request, with parent \a parent.
 */
ListManagedDataIdentifiersResponse::ListManagedDataIdentifiersResponse(
        const ListManagedDataIdentifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new ListManagedDataIdentifiersResponsePrivate(this), parent)
{
    setRequest(new ListManagedDataIdentifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListManagedDataIdentifiersRequest * ListManagedDataIdentifiersResponse::request() const
{
    Q_D(const ListManagedDataIdentifiersResponse);
    return static_cast<const ListManagedDataIdentifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 ListManagedDataIdentifiers \a response.
 */
void ListManagedDataIdentifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListManagedDataIdentifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::ListManagedDataIdentifiersResponsePrivate
 * \brief The ListManagedDataIdentifiersResponsePrivate class provides private implementation for ListManagedDataIdentifiersResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListManagedDataIdentifiersResponsePrivate object with public implementation \a q.
 */
ListManagedDataIdentifiersResponsePrivate::ListManagedDataIdentifiersResponsePrivate(
    ListManagedDataIdentifiersResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 ListManagedDataIdentifiers response element from \a xml.
 */
void ListManagedDataIdentifiersResponsePrivate::parseListManagedDataIdentifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListManagedDataIdentifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
