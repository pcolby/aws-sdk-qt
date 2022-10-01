// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executestatementresponse.h"
#include "executestatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ExecuteStatementResponse
 * \brief The ExecuteStatementResponse class provides an interace for RedshiftData ExecuteStatement responses.
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
 * \sa RedshiftDataClient::executeStatement
 */

/*!
 * Constructs a ExecuteStatementResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteStatementResponse::ExecuteStatementResponse(
        const ExecuteStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new ExecuteStatementResponsePrivate(this), parent)
{
    setRequest(new ExecuteStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteStatementRequest * ExecuteStatementResponse::request() const
{
    Q_D(const ExecuteStatementResponse);
    return static_cast<const ExecuteStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData ExecuteStatement \a response.
 */
void ExecuteStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::ExecuteStatementResponsePrivate
 * \brief The ExecuteStatementResponsePrivate class provides private implementation for ExecuteStatementResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ExecuteStatementResponsePrivate object with public implementation \a q.
 */
ExecuteStatementResponsePrivate::ExecuteStatementResponsePrivate(
    ExecuteStatementResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData ExecuteStatement response element from \a xml.
 */
void ExecuteStatementResponsePrivate::parseExecuteStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
