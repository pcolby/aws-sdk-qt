// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkgroupsresponse.h"
#include "listworkgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListWorkgroupsResponse
 * \brief The ListWorkgroupsResponse class provides an interace for RedshiftServerless ListWorkgroups responses.
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
 * \sa RedshiftServerlessClient::listWorkgroups
 */

/*!
 * Constructs a ListWorkgroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkgroupsResponse::ListWorkgroupsResponse(
        const ListWorkgroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ListWorkgroupsResponsePrivate(this), parent)
{
    setRequest(new ListWorkgroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkgroupsRequest * ListWorkgroupsResponse::request() const
{
    Q_D(const ListWorkgroupsResponse);
    return static_cast<const ListWorkgroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ListWorkgroups \a response.
 */
void ListWorkgroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkgroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ListWorkgroupsResponsePrivate
 * \brief The ListWorkgroupsResponsePrivate class provides private implementation for ListWorkgroupsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListWorkgroupsResponsePrivate object with public implementation \a q.
 */
ListWorkgroupsResponsePrivate::ListWorkgroupsResponsePrivate(
    ListWorkgroupsResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ListWorkgroups response element from \a xml.
 */
void ListWorkgroupsResponsePrivate::parseListWorkgroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkgroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
