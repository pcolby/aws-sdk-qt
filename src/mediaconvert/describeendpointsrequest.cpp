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

#include "describeendpointsrequest.h"
#include "describeendpointsrequest_p.h"
#include "describeendpointsresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DescribeEndpointsRequest
 *
 * \brief The DescribeEndpointsRequest class provides an interface for MediaConvert DescribeEndpoints requests.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::describeEndpoints
 */

/*!
 * @brief  Constructs a new DescribeEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest(const DescribeEndpointsRequest &other)
    : MediaConvertRequest(new DescribeEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeEndpointsRequest object.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest()
    : MediaConvertRequest(new DescribeEndpointsRequestPrivate(MediaConvertRequest::DescribeEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEndpointsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeEndpointsRequestPrivate
 *
 * @brief  Private implementation for DescribeEndpointsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointsRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public DescribeEndpointsRequest instance.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const MediaConvertRequest::Action action, DescribeEndpointsRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEndpointsRequest instance.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DescribeEndpointsRequestPrivate &other, DescribeEndpointsRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
