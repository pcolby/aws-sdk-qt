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

#include "describeclusterresponse.h"
#include "describeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DescribeClusterResponse
 * \brief The DescribeClusterResponse class provides an interace for EKS DescribeCluster responses.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Container Service for Kubernetes (Amazon EKS) is a managed service that makes it easy for you to run
 *  Kubernetes on AWS without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs three Kubernetes control plane instances across three Availability Zones to ensure high availability.
 *  Amazon EKS automatically detects and replaces unhealthy control plane instances, and it provides automated version
 *  upgrades and patching for
 * 
 *  them>
 * 
 *  Amazon EKS is also integrated with many AWS services to provide scalability and security for your applications,
 *  including the following:
 * 
 *  </p <ul> <li>
 * 
 *  Elastic Load Balancing for load
 * 
 *  distributio> </li> <li>
 * 
 *  IAM for
 * 
 *  authenticatio> </li> <li>
 * 
 *  Amazon VPC for
 * 
 *  isolatio> </li> </ul>
 * 
 *  Amazon EKS runs up to date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::describeCluster
 */

/*!
 * Constructs a DescribeClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterResponse::DescribeClusterResponse(
        const DescribeClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeClusterResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterRequest * DescribeClusterResponse::request() const
{
    Q_D(const DescribeClusterResponse);
    return static_cast<const DescribeClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EKS DescribeCluster \a response.
 */
void DescribeClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::DescribeClusterResponsePrivate
 * \brief The DescribeClusterResponsePrivate class provides private implementation for DescribeClusterResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DescribeClusterResponsePrivate object with public implementation \a q.
 */
DescribeClusterResponsePrivate::DescribeClusterResponsePrivate(
    DescribeClusterResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS DescribeCluster response element from \a xml.
 */
void DescribeClusterResponsePrivate::parseDescribeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterResponse"));
    /// @todo
}

} // namespace EKS
} // namespace QtAws
