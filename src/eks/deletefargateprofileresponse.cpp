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

#include "deletefargateprofileresponse.h"
#include "deletefargateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DeleteFargateProfileResponse
 * \brief The DeleteFargateProfileResponse class provides an interace for EKS DeleteFargateProfile responses.
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
 * \sa EksClient::deleteFargateProfile
 */

/*!
 * Constructs a DeleteFargateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFargateProfileResponse::DeleteFargateProfileResponse(
        const DeleteFargateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new DeleteFargateProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteFargateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFargateProfileRequest * DeleteFargateProfileResponse::request() const
{
    Q_D(const DeleteFargateProfileResponse);
    return static_cast<const DeleteFargateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EKS DeleteFargateProfile \a response.
 */
void DeleteFargateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFargateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EKS::DeleteFargateProfileResponsePrivate
 * \brief The DeleteFargateProfileResponsePrivate class provides private implementation for DeleteFargateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DeleteFargateProfileResponsePrivate object with public implementation \a q.
 */
DeleteFargateProfileResponsePrivate::DeleteFargateProfileResponsePrivate(
    DeleteFargateProfileResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a EKS DeleteFargateProfile response element from \a xml.
 */
void DeleteFargateProfileResponsePrivate::parseDeleteFargateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFargateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EKS
} // namespace QtAws
