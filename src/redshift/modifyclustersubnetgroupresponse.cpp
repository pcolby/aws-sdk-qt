/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyclustersubnetgroupresponse.h"
#include "modifyclustersubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::ModifyClusterSubnetGroupResponse
 * \brief The ModifyClusterSubnetGroupResponse class provides an interace for Redshift ModifyClusterSubnetGroup responses.
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
 * \sa RedshiftClient::modifyClusterSubnetGroup
 */

/*!
 * Constructs a ModifyClusterSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyClusterSubnetGroupResponse::ModifyClusterSubnetGroupResponse(
        const ModifyClusterSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ModifyClusterSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyClusterSubnetGroupRequest * ModifyClusterSubnetGroupResponse::request() const
{
    Q_D(const ModifyClusterSubnetGroupResponse);
    return static_cast<const ModifyClusterSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift ModifyClusterSubnetGroup \a response.
 */
void ModifyClusterSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyClusterSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::ModifyClusterSubnetGroupResponsePrivate
 * \brief The ModifyClusterSubnetGroupResponsePrivate class provides private implementation for ModifyClusterSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a ModifyClusterSubnetGroupResponsePrivate object with public implementation \a q.
 */
ModifyClusterSubnetGroupResponsePrivate::ModifyClusterSubnetGroupResponsePrivate(
    ModifyClusterSubnetGroupResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift ModifyClusterSubnetGroup response element from \a xml.
 */
void ModifyClusterSubnetGroupResponsePrivate::parseModifyClusterSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterSubnetGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
