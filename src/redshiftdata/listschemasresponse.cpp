// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemasresponse.h"
#include "listschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListSchemasResponse
 * \brief The ListSchemasResponse class provides an interace for RedshiftData ListSchemas responses.
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
 * \sa RedshiftDataClient::listSchemas
 */

/*!
 * Constructs a ListSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemasResponse::ListSchemasResponse(
        const ListSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new ListSchemasResponsePrivate(this), parent)
{
    setRequest(new ListSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemasRequest * ListSchemasResponse::request() const
{
    Q_D(const ListSchemasResponse);
    return static_cast<const ListSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData ListSchemas \a response.
 */
void ListSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::ListSchemasResponsePrivate
 * \brief The ListSchemasResponsePrivate class provides private implementation for ListSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListSchemasResponsePrivate object with public implementation \a q.
 */
ListSchemasResponsePrivate::ListSchemasResponsePrivate(
    ListSchemasResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData ListSchemas response element from \a xml.
 */
void ListSchemasResponsePrivate::parseListSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
