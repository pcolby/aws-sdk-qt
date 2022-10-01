// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnapshotsresponse.h"
#include "listsnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListSnapshotsResponse
 * \brief The ListSnapshotsResponse class provides an interace for RedshiftServerless ListSnapshots responses.
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
 * \sa RedshiftServerlessClient::listSnapshots
 */

/*!
 * Constructs a ListSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSnapshotsResponse::ListSnapshotsResponse(
        const ListSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ListSnapshotsResponsePrivate(this), parent)
{
    setRequest(new ListSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSnapshotsRequest * ListSnapshotsResponse::request() const
{
    Q_D(const ListSnapshotsResponse);
    return static_cast<const ListSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ListSnapshots \a response.
 */
void ListSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ListSnapshotsResponsePrivate
 * \brief The ListSnapshotsResponsePrivate class provides private implementation for ListSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListSnapshotsResponsePrivate object with public implementation \a q.
 */
ListSnapshotsResponsePrivate::ListSnapshotsResponsePrivate(
    ListSnapshotsResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ListSnapshots response element from \a xml.
 */
void ListSnapshotsResponsePrivate::parseListSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
