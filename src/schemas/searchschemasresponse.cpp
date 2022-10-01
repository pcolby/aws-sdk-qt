// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchschemasresponse.h"
#include "searchschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SearchSchemasResponse
 * \brief The SearchSchemasResponse class provides an interace for Schemas SearchSchemas responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::searchSchemas
 */

/*!
 * Constructs a SearchSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
SearchSchemasResponse::SearchSchemasResponse(
        const SearchSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new SearchSchemasResponsePrivate(this), parent)
{
    setRequest(new SearchSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchSchemasRequest * SearchSchemasResponse::request() const
{
    Q_D(const SearchSchemasResponse);
    return static_cast<const SearchSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas SearchSchemas \a response.
 */
void SearchSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::SearchSchemasResponsePrivate
 * \brief The SearchSchemasResponsePrivate class provides private implementation for SearchSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SearchSchemasResponsePrivate object with public implementation \a q.
 */
SearchSchemasResponsePrivate::SearchSchemasResponsePrivate(
    SearchSchemasResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas SearchSchemas response element from \a xml.
 */
void SearchSchemasResponsePrivate::parseSearchSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
