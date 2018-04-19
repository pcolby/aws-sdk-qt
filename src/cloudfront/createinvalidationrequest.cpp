/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createinvalidationrequest.h"
#include "createinvalidationrequest_p.h"
#include "createinvalidationresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateInvalidationRequest
 * \brief The CreateInvalidationRequest class provides an interface for CloudFront CreateInvalidation requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createInvalidation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInvalidationRequest::CreateInvalidationRequest(const CreateInvalidationRequest &other)
    : CloudFrontRequest(new CreateInvalidationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInvalidationRequest object.
 */
CreateInvalidationRequest::CreateInvalidationRequest()
    : CloudFrontRequest(new CreateInvalidationRequestPrivate(CloudFrontRequest::CreateInvalidationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInvalidationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInvalidationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInvalidationRequest::response(QNetworkReply * const reply) const
{
    return new CreateInvalidationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateInvalidationRequestPrivate
 * \brief The CreateInvalidationRequestPrivate class provides private implementation for CreateInvalidationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a CreateInvalidationRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
CreateInvalidationRequestPrivate::CreateInvalidationRequestPrivate(
    const CloudFrontRequest::Action action, CreateInvalidationRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInvalidationRequest
 * class' copy constructor.
 */
CreateInvalidationRequestPrivate::CreateInvalidationRequestPrivate(
    const CreateInvalidationRequestPrivate &other, CreateInvalidationRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
