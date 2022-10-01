// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesnapshotresponse.h"
#include "updatesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateSnapshotResponse
 * \brief The UpdateSnapshotResponse class provides an interace for RedshiftServerless UpdateSnapshot responses.
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
 * \sa RedshiftServerlessClient::updateSnapshot
 */

/*!
 * Constructs a UpdateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSnapshotResponse::UpdateSnapshotResponse(
        const UpdateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new UpdateSnapshotResponsePrivate(this), parent)
{
    setRequest(new UpdateSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSnapshotRequest * UpdateSnapshotResponse::request() const
{
    Q_D(const UpdateSnapshotResponse);
    return static_cast<const UpdateSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless UpdateSnapshot \a response.
 */
void UpdateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::UpdateSnapshotResponsePrivate
 * \brief The UpdateSnapshotResponsePrivate class provides private implementation for UpdateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateSnapshotResponsePrivate object with public implementation \a q.
 */
UpdateSnapshotResponsePrivate::UpdateSnapshotResponsePrivate(
    UpdateSnapshotResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless UpdateSnapshot response element from \a xml.
 */
void UpdateSnapshotResponsePrivate::parseUpdateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
