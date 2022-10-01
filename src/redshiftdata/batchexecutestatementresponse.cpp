// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchexecutestatementresponse.h"
#include "batchexecutestatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::BatchExecuteStatementResponse
 * \brief The BatchExecuteStatementResponse class provides an interace for RedshiftData BatchExecuteStatement responses.
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
 * \sa RedshiftDataClient::batchExecuteStatement
 */

/*!
 * Constructs a BatchExecuteStatementResponse object for \a reply to \a request, with parent \a parent.
 */
BatchExecuteStatementResponse::BatchExecuteStatementResponse(
        const BatchExecuteStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new BatchExecuteStatementResponsePrivate(this), parent)
{
    setRequest(new BatchExecuteStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchExecuteStatementRequest * BatchExecuteStatementResponse::request() const
{
    Q_D(const BatchExecuteStatementResponse);
    return static_cast<const BatchExecuteStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData BatchExecuteStatement \a response.
 */
void BatchExecuteStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchExecuteStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::BatchExecuteStatementResponsePrivate
 * \brief The BatchExecuteStatementResponsePrivate class provides private implementation for BatchExecuteStatementResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a BatchExecuteStatementResponsePrivate object with public implementation \a q.
 */
BatchExecuteStatementResponsePrivate::BatchExecuteStatementResponsePrivate(
    BatchExecuteStatementResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData BatchExecuteStatement response element from \a xml.
 */
void BatchExecuteStatementResponsePrivate::parseBatchExecuteStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchExecuteStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
