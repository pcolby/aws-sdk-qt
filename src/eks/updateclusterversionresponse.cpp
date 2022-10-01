// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterversionresponse.h"
#include "updateclusterversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateClusterVersionResponse
 * \brief The UpdateClusterVersionResponse class provides an interace for Eks UpdateClusterVersion responses.
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
 * \sa EksClient::updateClusterVersion
 */

/*!
 * Constructs a UpdateClusterVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClusterVersionResponse::UpdateClusterVersionResponse(
        const UpdateClusterVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new UpdateClusterVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClusterVersionRequest * UpdateClusterVersionResponse::request() const
{
    Q_D(const UpdateClusterVersionResponse);
    return static_cast<const UpdateClusterVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks UpdateClusterVersion \a response.
 */
void UpdateClusterVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::UpdateClusterVersionResponsePrivate
 * \brief The UpdateClusterVersionResponsePrivate class provides private implementation for UpdateClusterVersionResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateClusterVersionResponsePrivate object with public implementation \a q.
 */
UpdateClusterVersionResponsePrivate::UpdateClusterVersionResponsePrivate(
    UpdateClusterVersionResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks UpdateClusterVersion response element from \a xml.
 */
void UpdateClusterVersionResponsePrivate::parseUpdateClusterVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
