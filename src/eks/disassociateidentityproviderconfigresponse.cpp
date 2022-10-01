// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateidentityproviderconfigresponse.h"
#include "disassociateidentityproviderconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DisassociateIdentityProviderConfigResponse
 * \brief The DisassociateIdentityProviderConfigResponse class provides an interace for Eks DisassociateIdentityProviderConfig responses.
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
 * \sa EksClient::disassociateIdentityProviderConfig
 */

/*!
 * Constructs a DisassociateIdentityProviderConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateIdentityProviderConfigResponse::DisassociateIdentityProviderConfigResponse(
        const DisassociateIdentityProviderConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DisassociateIdentityProviderConfigResponsePrivate(this), parent)
{
    setRequest(new DisassociateIdentityProviderConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateIdentityProviderConfigRequest * DisassociateIdentityProviderConfigResponse::request() const
{
    Q_D(const DisassociateIdentityProviderConfigResponse);
    return static_cast<const DisassociateIdentityProviderConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DisassociateIdentityProviderConfig \a response.
 */
void DisassociateIdentityProviderConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateIdentityProviderConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DisassociateIdentityProviderConfigResponsePrivate
 * \brief The DisassociateIdentityProviderConfigResponsePrivate class provides private implementation for DisassociateIdentityProviderConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DisassociateIdentityProviderConfigResponsePrivate object with public implementation \a q.
 */
DisassociateIdentityProviderConfigResponsePrivate::DisassociateIdentityProviderConfigResponsePrivate(
    DisassociateIdentityProviderConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DisassociateIdentityProviderConfig response element from \a xml.
 */
void DisassociateIdentityProviderConfigResponsePrivate::parseDisassociateIdentityProviderConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateIdentityProviderConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
