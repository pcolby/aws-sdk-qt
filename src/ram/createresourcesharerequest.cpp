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

#include "createresourcesharerequest.h"
#include "createresourcesharerequest_p.h"
#include "createresourceshareresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::CreateResourceShareRequest
 * \brief The CreateResourceShareRequest class provides an interface for RAM CreateResourceShare requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resources
 *  associated with the resource share. The following principals are supported: AWS accounts, organizational units (OU) from
 *  AWS Organizations, and organizations from AWS
 * 
 *  Organizations>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/ram/latest/userguide/">AWS Resource Access Manager
 *  User
 *
 * \sa RamClient::createResourceShare
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceShareRequest::CreateResourceShareRequest(const CreateResourceShareRequest &other)
    : RamRequest(new CreateResourceShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceShareRequest object.
 */
CreateResourceShareRequest::CreateResourceShareRequest()
    : RamRequest(new CreateResourceShareRequestPrivate(RamRequest::CreateResourceShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceShareRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceShareResponse(*this, reply);
}

/*!
 * \class QtAws::RAM::CreateResourceShareRequestPrivate
 * \brief The CreateResourceShareRequestPrivate class provides private implementation for CreateResourceShareRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a CreateResourceShareRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
CreateResourceShareRequestPrivate::CreateResourceShareRequestPrivate(
    const RamRequest::Action action, CreateResourceShareRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceShareRequest
 * class' copy constructor.
 */
CreateResourceShareRequestPrivate::CreateResourceShareRequestPrivate(
    const CreateResourceShareRequestPrivate &other, CreateResourceShareRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace RAM
} // namespace QtAws
