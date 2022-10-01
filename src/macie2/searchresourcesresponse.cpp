// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchresourcesresponse.h"
#include "searchresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::SearchResourcesResponse
 * \brief The SearchResourcesResponse class provides an interace for Macie2 SearchResources responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::searchResources
 */

/*!
 * Constructs a SearchResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchResourcesResponse::SearchResourcesResponse(
        const SearchResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new SearchResourcesResponsePrivate(this), parent)
{
    setRequest(new SearchResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchResourcesRequest * SearchResourcesResponse::request() const
{
    Q_D(const SearchResourcesResponse);
    return static_cast<const SearchResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 SearchResources \a response.
 */
void SearchResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::SearchResourcesResponsePrivate
 * \brief The SearchResourcesResponsePrivate class provides private implementation for SearchResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a SearchResourcesResponsePrivate object with public implementation \a q.
 */
SearchResourcesResponsePrivate::SearchResourcesResponsePrivate(
    SearchResourcesResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 SearchResources response element from \a xml.
 */
void SearchResourcesResponsePrivate::parseSearchResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
