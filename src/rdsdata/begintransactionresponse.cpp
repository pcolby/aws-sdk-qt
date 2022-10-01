// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "begintransactionresponse.h"
#include "begintransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::BeginTransactionResponse
 * \brief The BeginTransactionResponse class provides an interace for RdsData BeginTransaction responses.
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
 * \sa RdsDataClient::beginTransaction
 */

/*!
 * Constructs a BeginTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
BeginTransactionResponse::BeginTransactionResponse(
        const BeginTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RdsDataResponse(new BeginTransactionResponsePrivate(this), parent)
{
    setRequest(new BeginTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BeginTransactionRequest * BeginTransactionResponse::request() const
{
    Q_D(const BeginTransactionResponse);
    return static_cast<const BeginTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RdsData BeginTransaction \a response.
 */
void BeginTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BeginTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RdsData::BeginTransactionResponsePrivate
 * \brief The BeginTransactionResponsePrivate class provides private implementation for BeginTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a BeginTransactionResponsePrivate object with public implementation \a q.
 */
BeginTransactionResponsePrivate::BeginTransactionResponsePrivate(
    BeginTransactionResponse * const q) : RdsDataResponsePrivate(q)
{

}

/*!
 * Parses a RdsData BeginTransaction response element from \a xml.
 */
void BeginTransactionResponsePrivate::parseBeginTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BeginTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RdsData
} // namespace QtAws
