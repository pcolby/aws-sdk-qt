// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusagelimitresponse.h"
#include "getusagelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetUsageLimitResponse
 * \brief The GetUsageLimitResponse class provides an interace for RedshiftServerless GetUsageLimit responses.
 *
 * \inmodule QtAwsRedshiftServerless
 *
 *  This is an interface reference for Amazon Redshift Serverless. It contains documentation for one of the programming or
 *  command line interfaces you can use to manage Amazon Redshift Serverless.
 * 
 *  </p
 * 
 *  Amazon Redshift Serverless automatically provisions data warehouse capacity and intelligently scales the underlying
 *  resources based on workload demands. Amazon Redshift Serverless adjusts capacity in seconds to deliver consistently high
 *  performance and simplified operations for even the most demanding and volatile workloads. Amazon Redshift Serverless
 *  lets you focus on using your data to acquire new insights for your business and customers.
 * 
 *  </p
 * 
 *  To learn more about Amazon Redshift Serverless, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What is Amazon Redshift Serverless</a>.
 *
 * \sa RedshiftServerlessClient::getUsageLimit
 */

/*!
 * Constructs a GetUsageLimitResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageLimitResponse::GetUsageLimitResponse(
        const GetUsageLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetUsageLimitResponsePrivate(this), parent)
{
    setRequest(new GetUsageLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageLimitRequest * GetUsageLimitResponse::request() const
{
    Q_D(const GetUsageLimitResponse);
    return static_cast<const GetUsageLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetUsageLimit \a response.
 */
void GetUsageLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetUsageLimitResponsePrivate
 * \brief The GetUsageLimitResponsePrivate class provides private implementation for GetUsageLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetUsageLimitResponsePrivate object with public implementation \a q.
 */
GetUsageLimitResponsePrivate::GetUsageLimitResponsePrivate(
    GetUsageLimitResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetUsageLimit response element from \a xml.
 */
void GetUsageLimitResponsePrivate::parseGetUsageLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
