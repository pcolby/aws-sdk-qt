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

#include "createcloudfrontoriginaccessidentityrequest.h"
#include "createcloudfrontoriginaccessidentityrequest_p.h"
#include "createcloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateCloudFrontOriginAccessIdentityRequest
 * \brief The CreateCloudFrontOriginAccessIdentityRequest class provides an interface for CloudFront CreateCloudFrontOriginAccessIdentity requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCloudFrontOriginAccessIdentityRequest::CreateCloudFrontOriginAccessIdentityRequest(const CreateCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new CreateCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCloudFrontOriginAccessIdentityRequest object.
 */
CreateCloudFrontOriginAccessIdentityRequest::CreateCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new CreateCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::CreateCloudFrontOriginAccessIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCloudFrontOriginAccessIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new CreateCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateCloudFrontOriginAccessIdentityRequestPrivate
 * \brief The CreateCloudFrontOriginAccessIdentityRequestPrivate class provides private implementation for CreateCloudFrontOriginAccessIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateCloudFrontOriginAccessIdentityRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateCloudFrontOriginAccessIdentityRequestPrivate::CreateCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, CreateCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 */
CreateCloudFrontOriginAccessIdentityRequestPrivate::CreateCloudFrontOriginAccessIdentityRequestPrivate(
    const CreateCloudFrontOriginAccessIdentityRequestPrivate &other, CreateCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
