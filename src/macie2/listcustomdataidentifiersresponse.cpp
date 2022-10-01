// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomdataidentifiersresponse.h"
#include "listcustomdataidentifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListCustomDataIdentifiersResponse
 * \brief The ListCustomDataIdentifiersResponse class provides an interace for Macie2 ListCustomDataIdentifiers responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listCustomDataIdentifiers
 */

/*!
 * Constructs a ListCustomDataIdentifiersResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomDataIdentifiersResponse::ListCustomDataIdentifiersResponse(
        const ListCustomDataIdentifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new ListCustomDataIdentifiersResponsePrivate(this), parent)
{
    setRequest(new ListCustomDataIdentifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomDataIdentifiersRequest * ListCustomDataIdentifiersResponse::request() const
{
    Q_D(const ListCustomDataIdentifiersResponse);
    return static_cast<const ListCustomDataIdentifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 ListCustomDataIdentifiers \a response.
 */
void ListCustomDataIdentifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomDataIdentifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::ListCustomDataIdentifiersResponsePrivate
 * \brief The ListCustomDataIdentifiersResponsePrivate class provides private implementation for ListCustomDataIdentifiersResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListCustomDataIdentifiersResponsePrivate object with public implementation \a q.
 */
ListCustomDataIdentifiersResponsePrivate::ListCustomDataIdentifiersResponsePrivate(
    ListCustomDataIdentifiersResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 ListCustomDataIdentifiers response element from \a xml.
 */
void ListCustomDataIdentifiersResponsePrivate::parseListCustomDataIdentifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomDataIdentifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
