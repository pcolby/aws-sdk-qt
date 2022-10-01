// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsresponse.h"
#include "listrecoverypointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListRecoveryPointsResponse
 * \brief The ListRecoveryPointsResponse class provides an interace for RedshiftServerless ListRecoveryPoints responses.
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
 * \sa RedshiftServerlessClient::listRecoveryPoints
 */

/*!
 * Constructs a ListRecoveryPointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryPointsResponse::ListRecoveryPointsResponse(
        const ListRecoveryPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ListRecoveryPointsResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryPointsRequest * ListRecoveryPointsResponse::request() const
{
    Q_D(const ListRecoveryPointsResponse);
    return static_cast<const ListRecoveryPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ListRecoveryPoints \a response.
 */
void ListRecoveryPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ListRecoveryPointsResponsePrivate
 * \brief The ListRecoveryPointsResponsePrivate class provides private implementation for ListRecoveryPointsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListRecoveryPointsResponsePrivate object with public implementation \a q.
 */
ListRecoveryPointsResponsePrivate::ListRecoveryPointsResponsePrivate(
    ListRecoveryPointsResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ListRecoveryPoints response element from \a xml.
 */
void ListRecoveryPointsResponsePrivate::parseListRecoveryPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
