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

#include "executestatementresponse.h"
#include "executestatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::ExecuteStatementResponse
 * \brief The ExecuteStatementResponse class provides an interace for RedshiftDataAPIService ExecuteStatement responses.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run individual SQL
 *  statements, which are committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataAPIServiceClient::executeStatement
 */

/*!
 * Constructs a ExecuteStatementResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteStatementResponse::ExecuteStatementResponse(
        const ExecuteStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataAPIServiceResponse(new ExecuteStatementResponsePrivate(this), parent)
{
    setRequest(new ExecuteStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteStatementRequest * ExecuteStatementResponse::request() const
{
    return static_cast<const ExecuteStatementRequest *>(RedshiftDataAPIServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful RedshiftDataAPIService ExecuteStatement \a response.
 */
void ExecuteStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftDataAPIService::ExecuteStatementResponsePrivate
 * \brief The ExecuteStatementResponsePrivate class provides private implementation for ExecuteStatementResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a ExecuteStatementResponsePrivate object with public implementation \a q.
 */
ExecuteStatementResponsePrivate::ExecuteStatementResponsePrivate(
    ExecuteStatementResponse * const q) : RedshiftDataAPIServiceResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftDataAPIService ExecuteStatement response element from \a xml.
 */
void ExecuteStatementResponsePrivate::parseExecuteStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftDataAPIService
} // namespace QtAws
