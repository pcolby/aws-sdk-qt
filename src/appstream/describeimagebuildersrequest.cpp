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

#include "describeimagebuildersrequest.h"
#include "describeimagebuildersrequest_p.h"
#include "describeimagebuildersresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImageBuildersRequest
 *
 * \brief The DescribeImageBuildersRequest class provides an interface for AppStream DescribeImageBuilders requests.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImageBuilders
 */

/*!
 * @brief  Constructs a new DescribeImageBuildersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeImageBuildersRequest::DescribeImageBuildersRequest(const DescribeImageBuildersRequest &other)
    : AppStreamRequest(new DescribeImageBuildersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeImageBuildersRequest object.
 */
DescribeImageBuildersRequest::DescribeImageBuildersRequest()
    : AppStreamRequest(new DescribeImageBuildersRequestPrivate(AppStreamRequest::DescribeImageBuildersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageBuildersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeImageBuildersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeImageBuildersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageBuildersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageBuildersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeImageBuildersRequestPrivate
 *
 * @brief  Private implementation for DescribeImageBuildersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeImageBuildersRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeImageBuildersRequest instance.
 */
DescribeImageBuildersRequestPrivate::DescribeImageBuildersRequestPrivate(
    const AppStreamRequest::Action action, DescribeImageBuildersRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeImageBuildersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageBuildersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeImageBuildersRequest instance.
 */
DescribeImageBuildersRequestPrivate::DescribeImageBuildersRequestPrivate(
    const DescribeImageBuildersRequestPrivate &other, DescribeImageBuildersRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
