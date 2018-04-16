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

#include "getdistributionrequest.h"
#include "getdistributionrequest_p.h"
#include "getdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionRequest
 *
 * \brief The GetDistributionRequest class provides an interface for CloudFront GetDistribution requests.
 *
 * \ingroup CloudFront
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
 * @brief  Constructs a new GetDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDistributionRequest::GetDistributionRequest(const GetDistributionRequest &other)
    : CloudFrontRequest(new GetDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDistributionRequest object.
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
 * @brief  Construct an GetDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDistributionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDistributionRequestPrivate
 *
 * @brief  Private implementation for GetDistributionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetDistributionRequest instance.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const CloudFrontRequest::Action action, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDistributionRequest instance.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const GetDistributionRequestPrivate &other, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
