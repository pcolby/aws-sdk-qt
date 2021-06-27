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
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::ExecuteStatementResponse
 * \brief The ExecuteStatementResponse class provides an interace for RDSDataService ExecuteStatement responses.
 *
 * \inmodule QtAwsRDSDataService
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API for Aurora
 *  Serverless</a> in the <i>Amazon Aurora User
 *
 * \sa RDSDataServiceClient::executeStatement
 */

/*!
 * Constructs a ExecuteStatementResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteStatementResponse::ExecuteStatementResponse(
        const ExecuteStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSDataServiceResponse(new ExecuteStatementResponsePrivate(this), parent)
{
    setRequest(new ExecuteStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteStatementRequest * ExecuteStatementResponse::request() const
{
    return static_cast<const ExecuteStatementRequest *>(RDSDataServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful RDSDataService ExecuteStatement \a response.
 */
void ExecuteStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RDSDataService::ExecuteStatementResponsePrivate
 * \brief The ExecuteStatementResponsePrivate class provides private implementation for ExecuteStatementResponse.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a ExecuteStatementResponsePrivate object with public implementation \a q.
 */
ExecuteStatementResponsePrivate::ExecuteStatementResponsePrivate(
    ExecuteStatementResponse * const q) : RDSDataServiceResponsePrivate(q)
{

}

/*!
 * Parses a RDSDataService ExecuteStatement response element from \a xml.
 */
void ExecuteStatementResponsePrivate::parseExecuteStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RDSDataService
} // namespace QtAws
