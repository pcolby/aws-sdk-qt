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

#include "createfargateprofilerequest.h"
#include "createfargateprofilerequest_p.h"
#include "createfargateprofileresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::CreateFargateProfileRequest
 * \brief The CreateFargateProfileRequest class provides an interface for EKS CreateFargateProfile requests.
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
 * \sa EksClient::createFargateProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFargateProfileRequest::CreateFargateProfileRequest(const CreateFargateProfileRequest &other)
    : EksRequest(new CreateFargateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFargateProfileRequest object.
 */
CreateFargateProfileRequest::CreateFargateProfileRequest()
    : EksRequest(new CreateFargateProfileRequestPrivate(EksRequest::CreateFargateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFargateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFargateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFargateProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateFargateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::EKS::CreateFargateProfileRequestPrivate
 * \brief The CreateFargateProfileRequestPrivate class provides private implementation for CreateFargateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a CreateFargateProfileRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
CreateFargateProfileRequestPrivate::CreateFargateProfileRequestPrivate(
    const EksRequest::Action action, CreateFargateProfileRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFargateProfileRequest
 * class' copy constructor.
 */
CreateFargateProfileRequestPrivate::CreateFargateProfileRequestPrivate(
    const CreateFargateProfileRequestPrivate &other, CreateFargateProfileRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace EKS
} // namespace QtAws
