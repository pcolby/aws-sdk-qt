// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaddonversionsresponse.h"
#include "describeaddonversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeAddonVersionsResponse
 * \brief The DescribeAddonVersionsResponse class provides an interace for Eks DescribeAddonVersions responses.
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
 * Parses a successful Eks DescribeAddonVersions \a response.
 */
void DescribeAddonVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAddonVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeAddonVersionsResponsePrivate
 * \brief The DescribeAddonVersionsResponsePrivate class provides private implementation for DescribeAddonVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeAddonVersionsResponsePrivate object with public implementation \a q.
 */
DescribeAddonVersionsResponsePrivate::DescribeAddonVersionsResponsePrivate(
    DescribeAddonVersionsResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeAddonVersions response element from \a xml.
 */
void DescribeAddonVersionsResponsePrivate::parseDescribeAddonVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddonVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
