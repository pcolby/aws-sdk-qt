// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkgroupresponse.h"
#include "getworkgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetWorkgroupResponse
 * \brief The GetWorkgroupResponse class provides an interace for RedshiftServerless GetWorkgroup responses.
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
 * \sa RedshiftServerlessClient::getWorkgroup
 */

/*!
 * Constructs a GetWorkgroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkgroupResponse::GetWorkgroupResponse(
        const GetWorkgroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetWorkgroupResponsePrivate(this), parent)
{
    setRequest(new GetWorkgroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkgroupRequest * GetWorkgroupResponse::request() const
{
    Q_D(const GetWorkgroupResponse);
    return static_cast<const GetWorkgroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetWorkgroup \a response.
 */
void GetWorkgroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkgroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetWorkgroupResponsePrivate
 * \brief The GetWorkgroupResponsePrivate class provides private implementation for GetWorkgroupResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetWorkgroupResponsePrivate object with public implementation \a q.
 */
GetWorkgroupResponsePrivate::GetWorkgroupResponsePrivate(
    GetWorkgroupResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetWorkgroup response element from \a xml.
 */
void GetWorkgroupResponsePrivate::parseGetWorkgroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkgroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
