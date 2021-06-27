/*
    Copyright 2013-2021 Paul Colby

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

#include "updateaddonresponse.h"
#include "updateaddonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::UpdateAddonResponse
 * \brief The UpdateAddonResponse class provides an interace for EKS UpdateAddon responses.
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
    return static_cast<const UpdateAddonRequest *>(EksResponse::request());
}

/*!
 * \reimp
 * Parses a successful EKS UpdateAddon \a response.
 */
void UpdateAddonResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAddonResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::UpdateAddonResponsePrivate
 * \brief The UpdateAddonResponsePrivate class provides private implementation for UpdateAddonResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a UpdateAddonResponsePrivate object with public implementation \a q.
 */
UpdateAddonResponsePrivate::UpdateAddonResponsePrivate(
    UpdateAddonResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS UpdateAddon response element from \a xml.
 */
void UpdateAddonResponsePrivate::parseUpdateAddonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAddonResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
