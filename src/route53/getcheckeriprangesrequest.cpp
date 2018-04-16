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

#include "getcheckeriprangesrequest.h"
#include "getcheckeriprangesrequest_p.h"
#include "getcheckeriprangesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetCheckerIpRangesRequest
 *
 * \brief The GetCheckerIpRangesRequest class encapsulates Route53 GetCheckerIpRanges requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::getCheckerIpRanges
 */

/*!
 * @brief  Constructs a new GetCheckerIpRangesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCheckerIpRangesRequest::GetCheckerIpRangesRequest(const GetCheckerIpRangesRequest &other)
    : Route53Request(new GetCheckerIpRangesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCheckerIpRangesRequest object.
 */
GetCheckerIpRangesRequest::GetCheckerIpRangesRequest()
    : Route53Request(new GetCheckerIpRangesRequestPrivate(Route53Request::GetCheckerIpRangesAction, this))
{

}

/*!
 * \reimp
 */
bool GetCheckerIpRangesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCheckerIpRangesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCheckerIpRangesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetCheckerIpRangesRequest::response(QNetworkReply * const reply) const
{
    return new GetCheckerIpRangesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCheckerIpRangesRequestPrivate
 *
 * @brief  Private implementation for GetCheckerIpRangesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCheckerIpRangesRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetCheckerIpRangesRequest instance.
 */
GetCheckerIpRangesRequestPrivate::GetCheckerIpRangesRequestPrivate(
    const Route53Request::Action action, GetCheckerIpRangesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCheckerIpRangesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCheckerIpRangesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCheckerIpRangesRequest instance.
 */
GetCheckerIpRangesRequestPrivate::GetCheckerIpRangesRequestPrivate(
    const GetCheckerIpRangesRequestPrivate &other, GetCheckerIpRangesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
