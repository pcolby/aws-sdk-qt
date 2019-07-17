/*
    Copyright 2013-2019 Paul Colby

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

#include "updateclusterconfigresponse.h"
#include "updateclusterconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::UpdateClusterConfigResponse
 * \brief The UpdateClusterConfigResponse class provides an interace for EKS UpdateClusterConfig responses.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
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
 * Parses a successful EKS UpdateClusterConfig \a response.
 */
void UpdateClusterConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::UpdateClusterConfigResponsePrivate
 * \brief The UpdateClusterConfigResponsePrivate class provides private implementation for UpdateClusterConfigResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a UpdateClusterConfigResponsePrivate object with public implementation \a q.
 */
UpdateClusterConfigResponsePrivate::UpdateClusterConfigResponsePrivate(
    UpdateClusterConfigResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS UpdateClusterConfig response element from \a xml.
 */
void UpdateClusterConfigResponsePrivate::parseUpdateClusterConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
