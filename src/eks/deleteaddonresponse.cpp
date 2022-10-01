// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaddonresponse.h"
#include "deleteaddonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteAddonResponse
 * \brief The DeleteAddonResponse class provides an interace for Eks DeleteAddon responses.
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
 * \sa EksClient::deleteAddon
 */

/*!
 * Constructs a DeleteAddonResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAddonResponse::DeleteAddonResponse(
        const DeleteAddonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DeleteAddonResponsePrivate(this), parent)
{
    setRequest(new DeleteAddonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAddonRequest * DeleteAddonResponse::request() const
{
    Q_D(const DeleteAddonResponse);
    return static_cast<const DeleteAddonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks DeleteAddon \a response.
 */
void DeleteAddonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAddonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DeleteAddonResponsePrivate
 * \brief The DeleteAddonResponsePrivate class provides private implementation for DeleteAddonResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteAddonResponsePrivate object with public implementation \a q.
 */
DeleteAddonResponsePrivate::DeleteAddonResponsePrivate(
    DeleteAddonResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DeleteAddon response element from \a xml.
 */
void DeleteAddonResponsePrivate::parseDeleteAddonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAddonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
