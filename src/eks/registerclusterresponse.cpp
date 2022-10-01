// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerclusterresponse.h"
#include "registerclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::RegisterClusterResponse
 * \brief The RegisterClusterResponse class provides an interace for Eks RegisterCluster responses.
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
 * \sa EksClient::registerCluster
 */

/*!
 * Constructs a RegisterClusterResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterClusterResponse::RegisterClusterResponse(
        const RegisterClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new RegisterClusterResponsePrivate(this), parent)
{
    setRequest(new RegisterClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterClusterRequest * RegisterClusterResponse::request() const
{
    Q_D(const RegisterClusterResponse);
    return static_cast<const RegisterClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks RegisterCluster \a response.
 */
void RegisterClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::RegisterClusterResponsePrivate
 * \brief The RegisterClusterResponsePrivate class provides private implementation for RegisterClusterResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a RegisterClusterResponsePrivate object with public implementation \a q.
 */
RegisterClusterResponsePrivate::RegisterClusterResponsePrivate(
    RegisterClusterResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks RegisterCluster response element from \a xml.
 */
void RegisterClusterResponsePrivate::parseRegisterClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
