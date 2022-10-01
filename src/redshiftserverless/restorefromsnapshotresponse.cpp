// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restorefromsnapshotresponse.h"
#include "restorefromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RestoreFromSnapshotResponse
 * \brief The RestoreFromSnapshotResponse class provides an interace for RedshiftServerless RestoreFromSnapshot responses.
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
 * \sa RedshiftServerlessClient::restoreFromSnapshot
 */

/*!
 * Constructs a RestoreFromSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreFromSnapshotResponse::RestoreFromSnapshotResponse(
        const RestoreFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new RestoreFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreFromSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreFromSnapshotRequest * RestoreFromSnapshotResponse::request() const
{
    Q_D(const RestoreFromSnapshotResponse);
    return static_cast<const RestoreFromSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless RestoreFromSnapshot \a response.
 */
void RestoreFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::RestoreFromSnapshotResponsePrivate
 * \brief The RestoreFromSnapshotResponsePrivate class provides private implementation for RestoreFromSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RestoreFromSnapshotResponsePrivate object with public implementation \a q.
 */
RestoreFromSnapshotResponsePrivate::RestoreFromSnapshotResponsePrivate(
    RestoreFromSnapshotResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless RestoreFromSnapshot response element from \a xml.
 */
void RestoreFromSnapshotResponsePrivate::parseRestoreFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreFromSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
