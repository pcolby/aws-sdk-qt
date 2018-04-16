/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "restorefromclustersnapshotresponse.h"
#include "restorefromclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RestoreFromClusterSnapshotResponse
 *
 * \brief The RestoreFromClusterSnapshotResponse class provides an interace for Redshift RestoreFromClusterSnapshot responses.
 *
 * \ingroup Redshift
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
 *  interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 *  Management
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
 *  href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::restoreFromClusterSnapshot
 */

/*!
 * @brief  Constructs a new RestoreFromClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreFromClusterSnapshotResponse::RestoreFromClusterSnapshotResponse(
        const RestoreFromClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RestoreFromClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreFromClusterSnapshotRequest(request));
    setReply(reply);
}

const RestoreFromClusterSnapshotRequest * RestoreFromClusterSnapshotResponse::request() const
{
    Q_D(const RestoreFromClusterSnapshotResponse);
    return static_cast<const RestoreFromClusterSnapshotRequest *>(d->request);
}

/*!
 * @brief  Parse a Redshift RestoreFromClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreFromClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(RestoreFromClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RestoreFromClusterSnapshotResponsePrivate
 *
 * \brief Private implementation for RestoreFromClusterSnapshotResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RestoreFromClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreFromClusterSnapshotResponse instance.
 */
RestoreFromClusterSnapshotResponsePrivate::RestoreFromClusterSnapshotResponsePrivate(
    RestoreFromClusterSnapshotResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Redshift RestoreFromClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreFromClusterSnapshotResponsePrivate::parseRestoreFromClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreFromClusterSnapshotResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
