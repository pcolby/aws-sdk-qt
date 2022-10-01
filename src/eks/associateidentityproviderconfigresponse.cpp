// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateidentityproviderconfigresponse.h"
#include "associateidentityproviderconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::AssociateIdentityProviderConfigResponse
 * \brief The AssociateIdentityProviderConfigResponse class provides an interace for Eks AssociateIdentityProviderConfig responses.
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
 * \sa EksClient::associateIdentityProviderConfig
 */

/*!
 * Constructs a AssociateIdentityProviderConfigResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateIdentityProviderConfigResponse::AssociateIdentityProviderConfigResponse(
        const AssociateIdentityProviderConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new AssociateIdentityProviderConfigResponsePrivate(this), parent)
{
    setRequest(new AssociateIdentityProviderConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateIdentityProviderConfigRequest * AssociateIdentityProviderConfigResponse::request() const
{
    Q_D(const AssociateIdentityProviderConfigResponse);
    return static_cast<const AssociateIdentityProviderConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks AssociateIdentityProviderConfig \a response.
 */
void AssociateIdentityProviderConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateIdentityProviderConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::AssociateIdentityProviderConfigResponsePrivate
 * \brief The AssociateIdentityProviderConfigResponsePrivate class provides private implementation for AssociateIdentityProviderConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a AssociateIdentityProviderConfigResponsePrivate object with public implementation \a q.
 */
AssociateIdentityProviderConfigResponsePrivate::AssociateIdentityProviderConfigResponsePrivate(
    AssociateIdentityProviderConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks AssociateIdentityProviderConfig response element from \a xml.
 */
void AssociateIdentityProviderConfigResponsePrivate::parseAssociateIdentityProviderConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateIdentityProviderConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
