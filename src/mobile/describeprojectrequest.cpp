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

#include "describeprojectrequest.h"
#include "describeprojectrequest_p.h"
#include "describeprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeProjectRequest
 *
 * \brief The DescribeProjectRequest class encapsulates Mobile DescribeProject requests.
 *
 * \ingroup Mobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeProject
 */

/*!
 * @brief  Constructs a new DescribeProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProjectRequest::DescribeProjectRequest(const DescribeProjectRequest &other)
    : MobileRequest(new DescribeProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeProjectRequest object.
 */
DescribeProjectRequest::DescribeProjectRequest()
    : MobileRequest(new DescribeProjectRequestPrivate(MobileRequest::DescribeProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeProjectRequestPrivate
 *
 * @brief  Private implementation for DescribeProjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProjectRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public DescribeProjectRequest instance.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const MobileRequest::Action action, DescribeProjectRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProjectRequest instance.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const DescribeProjectRequestPrivate &other, DescribeProjectRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
