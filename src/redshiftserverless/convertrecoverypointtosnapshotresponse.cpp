// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "convertrecoverypointtosnapshotresponse.h"
#include "convertrecoverypointtosnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ConvertRecoveryPointToSnapshotResponse
 * \brief The ConvertRecoveryPointToSnapshotResponse class provides an interace for RedshiftServerless ConvertRecoveryPointToSnapshot responses.
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
 * \sa RedshiftServerlessClient::convertRecoveryPointToSnapshot
 */

/*!
 * Constructs a ConvertRecoveryPointToSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
ConvertRecoveryPointToSnapshotResponse::ConvertRecoveryPointToSnapshotResponse(
        const ConvertRecoveryPointToSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ConvertRecoveryPointToSnapshotResponsePrivate(this), parent)
{
    setRequest(new ConvertRecoveryPointToSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConvertRecoveryPointToSnapshotRequest * ConvertRecoveryPointToSnapshotResponse::request() const
{
    Q_D(const ConvertRecoveryPointToSnapshotResponse);
    return static_cast<const ConvertRecoveryPointToSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ConvertRecoveryPointToSnapshot \a response.
 */
void ConvertRecoveryPointToSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConvertRecoveryPointToSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ConvertRecoveryPointToSnapshotResponsePrivate
 * \brief The ConvertRecoveryPointToSnapshotResponsePrivate class provides private implementation for ConvertRecoveryPointToSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ConvertRecoveryPointToSnapshotResponsePrivate object with public implementation \a q.
 */
ConvertRecoveryPointToSnapshotResponsePrivate::ConvertRecoveryPointToSnapshotResponsePrivate(
    ConvertRecoveryPointToSnapshotResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ConvertRecoveryPointToSnapshot response element from \a xml.
 */
void ConvertRecoveryPointToSnapshotResponsePrivate::parseConvertRecoveryPointToSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConvertRecoveryPointToSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
