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
