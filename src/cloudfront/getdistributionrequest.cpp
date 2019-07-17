/*
    Copyright 2013-2019 Paul Colby

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

#include "getdistributionrequest.h"
#include "getdistributionrequest_p.h"
#include "getdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionRequest
 * \brief The GetDistributionRequest class provides an interface for CloudFront GetDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
GetDistributionRequest::GetDistributionRequest(const GetDistributionRequest &other)
    : CloudFrontRequest(new GetDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDistributionRequest object.
 */
GetDistributionRequest::GetDistributionRequest()
    : CloudFrontRequest(new GetDistributionRequestPrivate(CloudFrontRequest::GetDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetDistributionRequestPrivate
 * \brief The GetDistributionRequestPrivate class provides private implementation for GetDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const CloudFrontRequest::Action action, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionRequest
 * class' copy constructor.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const GetDistributionRequestPrivate &other, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
