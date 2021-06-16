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

#include "createloginprofilerequest.h"
#include "createloginprofilerequest_p.h"
#include "createloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::CreateLoginProfileRequest
 * \brief The CreateLoginProfileRequest class provides an interface for IAM CreateLoginProfile requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::createLoginProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLoginProfileRequest::CreateLoginProfileRequest(const CreateLoginProfileRequest &other)
    : IamRequest(new CreateLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLoginProfileRequest object.
 */
CreateLoginProfileRequest::CreateLoginProfileRequest()
    : IamRequest(new CreateLoginProfileRequestPrivate(IamRequest::CreateLoginProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoginProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLoginProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoginProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::CreateLoginProfileRequestPrivate
 * \brief The CreateLoginProfileRequestPrivate class provides private implementation for CreateLoginProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a CreateLoginProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateLoginProfileRequestPrivate::CreateLoginProfileRequestPrivate(
    const IamRequest::Action action, CreateLoginProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLoginProfileRequest
 * class' copy constructor.
 */
CreateLoginProfileRequestPrivate::CreateLoginProfileRequestPrivate(
    const CreateLoginProfileRequestPrivate &other, CreateLoginProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
