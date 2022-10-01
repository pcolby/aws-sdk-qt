// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeidentityproviderconfigresponse.h"
#include "describeidentityproviderconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeIdentityProviderConfigResponse
 * \brief The DescribeIdentityProviderConfigResponse class provides an interace for Eks DescribeIdentityProviderConfig responses.
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
 * \sa EksClient::describeIdentityProviderConfig
 */

/*!
 * Constructs a DescribeIdentityProviderConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIdentityProviderConfigResponse::DescribeIdentityProviderConfigResponse(
        const DescribeIdentityProviderConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DescribeIdentityProviderConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityProviderConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIdentityProviderConfigRequest * DescribeIdentityProviderConfigResponse::request() const
{
    Q_D(const DescribeIdentityProviderConfigResponse);
    return static_cast<const DescribeIdentityProviderConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DescribeIdentityProviderConfig \a response.
 */
void DescribeIdentityProviderConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIdentityProviderConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DescribeIdentityProviderConfigResponsePrivate
 * \brief The DescribeIdentityProviderConfigResponsePrivate class provides private implementation for DescribeIdentityProviderConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeIdentityProviderConfigResponsePrivate object with public implementation \a q.
 */
DescribeIdentityProviderConfigResponsePrivate::DescribeIdentityProviderConfigResponsePrivate(
    DescribeIdentityProviderConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DescribeIdentityProviderConfig response element from \a xml.
 */
void DescribeIdentityProviderConfigResponsePrivate::parseDescribeIdentityProviderConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityProviderConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
