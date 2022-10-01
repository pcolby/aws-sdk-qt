// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "querytablerowsresponse.h"
#include "querytablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::QueryTableRowsResponse
 * \brief The QueryTableRowsResponse class provides an interace for Honeycode QueryTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::queryTableRows
 */

/*!
 * Constructs a QueryTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
QueryTableRowsResponse::QueryTableRowsResponse(
        const QueryTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new QueryTableRowsResponsePrivate(this), parent)
{
    setRequest(new QueryTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryTableRowsRequest * QueryTableRowsResponse::request() const
{
    Q_D(const QueryTableRowsResponse);
    return static_cast<const QueryTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode QueryTableRows \a response.
 */
void QueryTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::QueryTableRowsResponsePrivate
 * \brief The QueryTableRowsResponsePrivate class provides private implementation for QueryTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a QueryTableRowsResponsePrivate object with public implementation \a q.
 */
QueryTableRowsResponsePrivate::QueryTableRowsResponsePrivate(
    QueryTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode QueryTableRows response element from \a xml.
 */
void QueryTableRowsResponsePrivate::parseQueryTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
