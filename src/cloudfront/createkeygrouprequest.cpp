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

#include "createkeygrouprequest.h"
#include "createkeygrouprequest_p.h"
#include "createkeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateKeyGroupRequest
 * \brief The CreateKeyGroupRequest class provides an interface for CloudFront CreateKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKeyGroupRequest::CreateKeyGroupRequest(const CreateKeyGroupRequest &other)
    : CloudFrontRequest(new CreateKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKeyGroupRequest object.
 */
CreateKeyGroupRequest::CreateKeyGroupRequest()
    : CloudFrontRequest(new CreateKeyGroupRequestPrivate(CloudFrontRequest::CreateKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateKeyGroupRequestPrivate
 * \brief The CreateKeyGroupRequestPrivate class provides private implementation for CreateKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateKeyGroupRequestPrivate::CreateKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, CreateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyGroupRequest
 * class' copy constructor.
 */
CreateKeyGroupRequestPrivate::CreateKeyGroupRequestPrivate(
    const CreateKeyGroupRequestPrivate &other, CreateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
