/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "liststatementsresponse.h"
#include "liststatementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListStatementsResponse
 * \brief The ListStatementsResponse class provides an interace for RedshiftData ListStatements responses.
 *
 * \inmodule QtAwsRedshiftData
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run SQL statements, which are
 *  committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API and CLI usage examples, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataClient::listStatements
 */

/*!
 * Constructs a ListStatementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStatementsResponse::ListStatementsResponse(
        const ListStatementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new ListStatementsResponsePrivate(this), parent)
{
    setRequest(new ListStatementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStatementsRequest * ListStatementsResponse::request() const
{
    Q_D(const ListStatementsResponse);
    return static_cast<const ListStatementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData ListStatements \a response.
 */
void ListStatementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStatementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::ListStatementsResponsePrivate
 * \brief The ListStatementsResponsePrivate class provides private implementation for ListStatementsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListStatementsResponsePrivate object with public implementation \a q.
 */
ListStatementsResponsePrivate::ListStatementsResponsePrivate(
    ListStatementsResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData ListStatements response element from \a xml.
 */
void ListStatementsResponsePrivate::parseListStatementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStatementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
