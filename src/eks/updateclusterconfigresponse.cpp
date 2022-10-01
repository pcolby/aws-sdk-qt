// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterconfigresponse.h"
#include "updateclusterconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateClusterConfigResponse
 * \brief The UpdateClusterConfigResponse class provides an interace for Eks UpdateClusterConfig responses.
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
 * \sa EksClient::updateClusterConfig
 */

/*!
 * Constructs a UpdateClusterConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClusterConfigResponse::UpdateClusterConfigResponse(
        const UpdateClusterConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new UpdateClusterConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClusterConfigRequest * UpdateClusterConfigResponse::request() const
{
    Q_D(const UpdateClusterConfigResponse);
    return static_cast<const UpdateClusterConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks UpdateClusterConfig \a response.
 */
void UpdateClusterConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::UpdateClusterConfigResponsePrivate
 * \brief The UpdateClusterConfigResponsePrivate class provides private implementation for UpdateClusterConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateClusterConfigResponsePrivate object with public implementation \a q.
 */
UpdateClusterConfigResponsePrivate::UpdateClusterConfigResponsePrivate(
    UpdateClusterConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks UpdateClusterConfig response element from \a xml.
 */
void UpdateClusterConfigResponsePrivate::parseUpdateClusterConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
