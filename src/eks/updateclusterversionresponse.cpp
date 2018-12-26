/*
    Copyright 2013-2018 Paul Colby

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

#include "updateclusterversionresponse.h"
#include "updateclusterversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::UpdateClusterVersionResponse
 * \brief The UpdateClusterVersionResponse class provides an interace for EKS UpdateClusterVersion responses.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Container Service for Kubernetes (Amazon EKS) is a managed service that makes it easy for you to run
 *  Kubernetes on AWS without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
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
 * Parses a successful EKS UpdateClusterVersion \a response.
 */
void UpdateClusterVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::UpdateClusterVersionResponsePrivate
 * \brief The UpdateClusterVersionResponsePrivate class provides private implementation for UpdateClusterVersionResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a UpdateClusterVersionResponsePrivate object with public implementation \a q.
 */
UpdateClusterVersionResponsePrivate::UpdateClusterVersionResponsePrivate(
    UpdateClusterVersionResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS UpdateClusterVersion response element from \a xml.
 */
void UpdateClusterVersionResponsePrivate::parseUpdateClusterVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
