// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstatementresultresponse.h"
#include "getstatementresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::GetStatementResultResponse
 * \brief The GetStatementResultResponse class provides an interace for RedshiftData GetStatementResult responses.
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
 * \sa RedshiftDataClient::getStatementResult
 */

/*!
 * Constructs a GetStatementResultResponse object for \a reply to \a request, with parent \a parent.
 */
GetStatementResultResponse::GetStatementResultResponse(
        const GetStatementResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataResponse(new GetStatementResultResponsePrivate(this), parent)
{
    setRequest(new GetStatementResultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStatementResultRequest * GetStatementResultResponse::request() const
{
    Q_D(const GetStatementResultResponse);
    return static_cast<const GetStatementResultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftData GetStatementResult \a response.
 */
void GetStatementResultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStatementResultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftData::GetStatementResultResponsePrivate
 * \brief The GetStatementResultResponsePrivate class provides private implementation for GetStatementResultResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a GetStatementResultResponsePrivate object with public implementation \a q.
 */
GetStatementResultResponsePrivate::GetStatementResultResponsePrivate(
    GetStatementResultResponse * const q) : RedshiftDataResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftData GetStatementResult response element from \a xml.
 */
void GetStatementResultResponsePrivate::parseGetStatementResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatementResultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftData
} // namespace QtAws
