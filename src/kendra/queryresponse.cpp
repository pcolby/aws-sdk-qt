// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryresponse.h"
#include "queryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::QueryResponse
 * \brief The QueryResponse class provides an interace for Kendra Query responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::query
 */

/*!
 * Constructs a QueryResponse object for \a reply to \a request, with parent \a parent.
 */
QueryResponse::QueryResponse(
        const QueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new QueryResponsePrivate(this), parent)
{
    setRequest(new QueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryRequest * QueryResponse::request() const
{
    Q_D(const QueryResponse);
    return static_cast<const QueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra Query \a response.
 */
void QueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::QueryResponsePrivate
 * \brief The QueryResponsePrivate class provides private implementation for QueryResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a QueryResponsePrivate object with public implementation \a q.
 */
QueryResponsePrivate::QueryResponsePrivate(
    QueryResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra Query response element from \a xml.
 */
void QueryResponsePrivate::parseQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
