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

#include "getdistributionconfigrequest.h"
#include "getdistributionconfigrequest_p.h"
#include "getdistributionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionConfigRequest
 * \brief The GetDistributionConfigRequest class provides an interface for CloudFront GetDistributionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistributionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetDistributionConfigRequest::GetDistributionConfigRequest(const GetDistributionConfigRequest &other)
    : CloudFrontRequest(new GetDistributionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDistributionConfigRequest object.
 */
GetDistributionConfigRequest::GetDistributionConfigRequest()
    : CloudFrontRequest(new GetDistributionConfigRequestPrivate(CloudFrontRequest::GetDistributionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetDistributionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDistributionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetDistributionConfigRequestPrivate
 * \brief The GetDistributionConfigRequestPrivate class provides private implementation for GetDistributionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetDistributionConfigRequestPrivate::GetDistributionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionConfigRequest
 * class' copy constructor.
 */
GetDistributionConfigRequestPrivate::GetDistributionConfigRequestPrivate(
    const GetDistributionConfigRequestPrivate &other, GetDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
