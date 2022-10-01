// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnapshotresponse.h"
#include "getsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetSnapshotResponse
 * \brief The GetSnapshotResponse class provides an interace for RedshiftServerless GetSnapshot responses.
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
 * \sa RedshiftServerlessClient::getSnapshot
 */

/*!
 * Constructs a GetSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnapshotResponse::GetSnapshotResponse(
        const GetSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnapshotRequest * GetSnapshotResponse::request() const
{
    Q_D(const GetSnapshotResponse);
    return static_cast<const GetSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetSnapshot \a response.
 */
void GetSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetSnapshotResponsePrivate
 * \brief The GetSnapshotResponsePrivate class provides private implementation for GetSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetSnapshotResponsePrivate object with public implementation \a q.
 */
GetSnapshotResponsePrivate::GetSnapshotResponsePrivate(
    GetSnapshotResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetSnapshot response element from \a xml.
 */
void GetSnapshotResponsePrivate::parseGetSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
