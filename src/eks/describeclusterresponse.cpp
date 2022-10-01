// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusterresponse.h"
#include "describeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeClusterResponse
 * \brief The DescribeClusterResponse class provides an interace for Eks DescribeCluster responses.
 *
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
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
 * Parses a successful Eks DescribeCluster \a response.
 */
void DescribeClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeClusterResponsePrivate
 * \brief The DescribeClusterResponsePrivate class provides private implementation for DescribeClusterResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeClusterResponsePrivate object with public implementation \a q.
 */
DescribeClusterResponsePrivate::DescribeClusterResponsePrivate(
    DescribeClusterResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeCluster response element from \a xml.
 */
void DescribeClusterResponsePrivate::parseDescribeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
