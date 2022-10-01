// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablesresponse.h"
#include "listtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListTablesResponse
 * \brief The ListTablesResponse class provides an interace for RedshiftData ListTables responses.
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
 * \sa RedshiftDataClient::listTables
 */

/*!
 * Constructs a ListTablesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTablesResponse::ListTablesResponse(
        const ListTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new ListTablesResponsePrivate(this), parent)
{
    setRequest(new ListTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTablesRequest * ListTablesResponse::request() const
{
    Q_D(const ListTablesResponse);
    return static_cast<const ListTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData ListTables \a response.
 */
void ListTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::ListTablesResponsePrivate
 * \brief The ListTablesResponsePrivate class provides private implementation for ListTablesResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListTablesResponsePrivate object with public implementation \a q.
 */
ListTablesResponsePrivate::ListTablesResponsePrivate(
    ListTablesResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData ListTables response element from \a xml.
 */
void ListTablesResponsePrivate::parseListTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
