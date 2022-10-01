// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenodegroupconfigresponse.h"
#include "updatenodegroupconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateNodegroupConfigResponse
 * \brief The UpdateNodegroupConfigResponse class provides an interace for Eks UpdateNodegroupConfig responses.
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
 * \sa EksClient::updateNodegroupConfig
 */

/*!
 * Constructs a UpdateNodegroupConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNodegroupConfigResponse::UpdateNodegroupConfigResponse(
        const UpdateNodegroupConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new UpdateNodegroupConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateNodegroupConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNodegroupConfigRequest * UpdateNodegroupConfigResponse::request() const
{
    Q_D(const UpdateNodegroupConfigResponse);
    return static_cast<const UpdateNodegroupConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks UpdateNodegroupConfig \a response.
 */
void UpdateNodegroupConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNodegroupConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::UpdateNodegroupConfigResponsePrivate
 * \brief The UpdateNodegroupConfigResponsePrivate class provides private implementation for UpdateNodegroupConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateNodegroupConfigResponsePrivate object with public implementation \a q.
 */
UpdateNodegroupConfigResponsePrivate::UpdateNodegroupConfigResponsePrivate(
    UpdateNodegroupConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks UpdateNodegroupConfig response element from \a xml.
 */
void UpdateNodegroupConfigResponsePrivate::parseUpdateNodegroupConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNodegroupConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
