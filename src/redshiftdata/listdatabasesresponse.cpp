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

#include "listdatabasesresponse.h"
#include "listdatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListDatabasesResponse
 * \brief The ListDatabasesResponse class provides an interace for RedshiftData ListDatabases responses.
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
 * \sa RedshiftDataClient::listDatabases
 */

/*!
 * Constructs a ListDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatabasesResponse::ListDatabasesResponse(
        const ListDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new ListDatabasesResponsePrivate(this), parent)
{
    setRequest(new ListDatabasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatabasesRequest * ListDatabasesResponse::request() const
{
    Q_D(const ListDatabasesResponse);
    return static_cast<const ListDatabasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData ListDatabases \a response.
 */
void ListDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::ListDatabasesResponsePrivate
 * \brief The ListDatabasesResponsePrivate class provides private implementation for ListDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListDatabasesResponsePrivate object with public implementation \a q.
 */
ListDatabasesResponsePrivate::ListDatabasesResponsePrivate(
    ListDatabasesResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData ListDatabases response element from \a xml.
 */
void ListDatabasesResponsePrivate::parseListDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
