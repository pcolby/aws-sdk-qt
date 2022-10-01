// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaddonresponse.h"
#include "updateaddonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateAddonResponse
 * \brief The UpdateAddonResponse class provides an interace for Eks UpdateAddon responses.
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
 * \sa EksClient::updateAddon
 */

/*!
 * Constructs a UpdateAddonResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAddonResponse::UpdateAddonResponse(
        const UpdateAddonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new UpdateAddonResponsePrivate(this), parent)
{
    setRequest(new UpdateAddonRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAddonRequest * UpdateAddonResponse::request() const
{
    Q_D(const UpdateAddonResponse);
    return static_cast<const UpdateAddonRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks UpdateAddon \a response.
 */
void UpdateAddonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAddonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::UpdateAddonResponsePrivate
 * \brief The UpdateAddonResponsePrivate class provides private implementation for UpdateAddonResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateAddonResponsePrivate object with public implementation \a q.
 */
UpdateAddonResponsePrivate::UpdateAddonResponsePrivate(
    UpdateAddonResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks UpdateAddon response element from \a xml.
 */
void UpdateAddonResponsePrivate::parseUpdateAddonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAddonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
