// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefargateprofileresponse.h"
#include "deletefargateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteFargateProfileResponse
 * \brief The DeleteFargateProfileResponse class provides an interace for Eks DeleteFargateProfile responses.
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
 * Parses a successful Eks DeleteFargateProfile \a response.
 */
void DeleteFargateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFargateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::DeleteFargateProfileResponsePrivate
 * \brief The DeleteFargateProfileResponsePrivate class provides private implementation for DeleteFargateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteFargateProfileResponsePrivate object with public implementation \a q.
 */
DeleteFargateProfileResponsePrivate::DeleteFargateProfileResponsePrivate(
    DeleteFargateProfileResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks DeleteFargateProfile response element from \a xml.
 */
void DeleteFargateProfileResponsePrivate::parseDeleteFargateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFargateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
