// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfindingsfiltersresponse.h"
#include "listfindingsfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListFindingsFiltersResponse
 * \brief The ListFindingsFiltersResponse class provides an interace for Macie2 ListFindingsFilters responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listFindingsFilters
 */

/*!
 * Constructs a ListFindingsFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFindingsFiltersResponse::ListFindingsFiltersResponse(
        const ListFindingsFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new ListFindingsFiltersResponsePrivate(this), parent)
{
    setRequest(new ListFindingsFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFindingsFiltersRequest * ListFindingsFiltersResponse::request() const
{
    Q_D(const ListFindingsFiltersResponse);
    return static_cast<const ListFindingsFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 ListFindingsFilters \a response.
 */
void ListFindingsFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFindingsFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::ListFindingsFiltersResponsePrivate
 * \brief The ListFindingsFiltersResponsePrivate class provides private implementation for ListFindingsFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListFindingsFiltersResponsePrivate object with public implementation \a q.
 */
ListFindingsFiltersResponsePrivate::ListFindingsFiltersResponsePrivate(
    ListFindingsFiltersResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 ListFindingsFilters response element from \a xml.
 */
void ListFindingsFiltersResponsePrivate::parseListFindingsFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFindingsFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
