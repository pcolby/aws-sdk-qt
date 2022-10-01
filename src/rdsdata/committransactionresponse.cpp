// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "committransactionresponse.h"
#include "committransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::CommitTransactionResponse
 * \brief The CommitTransactionResponse class provides an interace for RdsData CommitTransaction responses.
 *
 * \inmodule QtAwsRdsData
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless v1 DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API> <note>
 * 
 *  The Data Service API isn't supported on Amazon Aurora Serverless v2 DB
 * 
 *  clusters> </note>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API</a> in the
 *  <i>Amazon Aurora User
 *
 * \sa RdsDataClient::commitTransaction
 */

/*!
 * Constructs a CommitTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
CommitTransactionResponse::CommitTransactionResponse(
        const CommitTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RdsDataResponse(new CommitTransactionResponsePrivate(this), parent)
{
    setRequest(new CommitTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CommitTransactionRequest * CommitTransactionResponse::request() const
{
    Q_D(const CommitTransactionResponse);
    return static_cast<const CommitTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RdsData CommitTransaction \a response.
 */
void CommitTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CommitTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RdsData::CommitTransactionResponsePrivate
 * \brief The CommitTransactionResponsePrivate class provides private implementation for CommitTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a CommitTransactionResponsePrivate object with public implementation \a q.
 */
CommitTransactionResponsePrivate::CommitTransactionResponsePrivate(
    CommitTransactionResponse * const q) : RdsDataResponsePrivate(q)
{

}

/*!
 * Parses a RdsData CommitTransaction response element from \a xml.
 */
void CommitTransactionResponsePrivate::parseCommitTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CommitTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RdsData
} // namespace QtAws
