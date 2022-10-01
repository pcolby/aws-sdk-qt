// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfargateprofileresponse.h"
#include "createfargateprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::CreateFargateProfileResponse
 * \brief The CreateFargateProfileResponse class provides an interace for Eks CreateFargateProfile responses.
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
 * \sa EksClient::createFargateProfile
 */

/*!
 * Constructs a CreateFargateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFargateProfileResponse::CreateFargateProfileResponse(
        const CreateFargateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new CreateFargateProfileResponsePrivate(this), parent)
{
    setRequest(new CreateFargateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFargateProfileRequest * CreateFargateProfileResponse::request() const
{
    Q_D(const CreateFargateProfileResponse);
    return static_cast<const CreateFargateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks CreateFargateProfile \a response.
 */
void CreateFargateProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFargateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::CreateFargateProfileResponsePrivate
 * \brief The CreateFargateProfileResponsePrivate class provides private implementation for CreateFargateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a CreateFargateProfileResponsePrivate object with public implementation \a q.
 */
CreateFargateProfileResponsePrivate::CreateFargateProfileResponsePrivate(
    CreateFargateProfileResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks CreateFargateProfile response element from \a xml.
 */
void CreateFargateProfileResponsePrivate::parseCreateFargateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFargateProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
