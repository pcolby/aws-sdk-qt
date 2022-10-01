// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateencryptionconfigresponse.h"
#include "associateencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::AssociateEncryptionConfigResponse
 * \brief The AssociateEncryptionConfigResponse class provides an interace for Eks AssociateEncryptionConfig responses.
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
 * \sa EksClient::associateEncryptionConfig
 */

/*!
 * Constructs a AssociateEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateEncryptionConfigResponse::AssociateEncryptionConfigResponse(
        const AssociateEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new AssociateEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new AssociateEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateEncryptionConfigRequest * AssociateEncryptionConfigResponse::request() const
{
    Q_D(const AssociateEncryptionConfigResponse);
    return static_cast<const AssociateEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks AssociateEncryptionConfig \a response.
 */
void AssociateEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::AssociateEncryptionConfigResponsePrivate
 * \brief The AssociateEncryptionConfigResponsePrivate class provides private implementation for AssociateEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a AssociateEncryptionConfigResponsePrivate object with public implementation \a q.
 */
AssociateEncryptionConfigResponsePrivate::AssociateEncryptionConfigResponsePrivate(
    AssociateEncryptionConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks AssociateEncryptionConfig response element from \a xml.
 */
void AssociateEncryptionConfigResponsePrivate::parseAssociateEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
