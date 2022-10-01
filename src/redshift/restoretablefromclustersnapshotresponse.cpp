// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoretablefromclustersnapshotresponse.h"
#include "restoretablefromclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RestoreTableFromClusterSnapshotResponse
 * \brief The RestoreTableFromClusterSnapshotResponse class provides an interace for Redshift RestoreTableFromClusterSnapshot responses.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::restoreTableFromClusterSnapshot
 */

/*!
 * Constructs a RestoreTableFromClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreTableFromClusterSnapshotResponse::RestoreTableFromClusterSnapshotResponse(
        const RestoreTableFromClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RestoreTableFromClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreTableFromClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreTableFromClusterSnapshotRequest * RestoreTableFromClusterSnapshotResponse::request() const
{
    Q_D(const RestoreTableFromClusterSnapshotResponse);
    return static_cast<const RestoreTableFromClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift RestoreTableFromClusterSnapshot \a response.
 */
void RestoreTableFromClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreTableFromClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::RestoreTableFromClusterSnapshotResponsePrivate
 * \brief The RestoreTableFromClusterSnapshotResponsePrivate class provides private implementation for RestoreTableFromClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RestoreTableFromClusterSnapshotResponsePrivate object with public implementation \a q.
 */
RestoreTableFromClusterSnapshotResponsePrivate::RestoreTableFromClusterSnapshotResponsePrivate(
    RestoreTableFromClusterSnapshotResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift RestoreTableFromClusterSnapshot response element from \a xml.
 */
void RestoreTableFromClusterSnapshotResponsePrivate::parseRestoreTableFromClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreTableFromClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
