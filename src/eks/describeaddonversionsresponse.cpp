/*
    Copyright 2013-2021 Paul Colby

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

#include "describeaddonversionsresponse.h"
#include "describeaddonversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DescribeAddonVersionsResponse
 * \brief The DescribeAddonVersionsResponse class provides an interace for EKS DescribeAddonVersions responses.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::describeAddonVersions
 */

/*!
 * Constructs a DescribeAddonVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAddonVersionsResponse::DescribeAddonVersionsResponse(
        const DescribeAddonVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeAddonVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAddonVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAddonVersionsRequest * DescribeAddonVersionsResponse::request() const
{
    Q_D(const DescribeAddonVersionsResponse);
    return static_cast<const DescribeAddonVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EKS DescribeAddonVersions \a response.
 */
void DescribeAddonVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAddonVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::DescribeAddonVersionsResponsePrivate
 * \brief The DescribeAddonVersionsResponsePrivate class provides private implementation for DescribeAddonVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DescribeAddonVersionsResponsePrivate object with public implementation \a q.
 */
DescribeAddonVersionsResponsePrivate::DescribeAddonVersionsResponsePrivate(
    DescribeAddonVersionsResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS DescribeAddonVersions response element from \a xml.
 */
void DescribeAddonVersionsResponsePrivate::parseDescribeAddonVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddonVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
