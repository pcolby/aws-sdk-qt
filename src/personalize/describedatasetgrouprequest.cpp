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

#include "describedatasetgrouprequest.h"
#include "describedatasetgrouprequest_p.h"
#include "describedatasetgroupresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetGroupRequest
 * \brief The DescribeDatasetGroupRequest class provides an interface for Personalize DescribeDatasetGroup requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetGroupRequest::DescribeDatasetGroupRequest(const DescribeDatasetGroupRequest &other)
    : PersonalizeRequest(new DescribeDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetGroupRequest object.
 */
DescribeDatasetGroupRequest::DescribeDatasetGroupRequest()
    : PersonalizeRequest(new DescribeDatasetGroupRequestPrivate(PersonalizeRequest::DescribeDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeDatasetGroupRequestPrivate
 * \brief The DescribeDatasetGroupRequestPrivate class provides private implementation for DescribeDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetGroupRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeDatasetGroupRequestPrivate::DescribeDatasetGroupRequestPrivate(
    const PersonalizeRequest::Action action, DescribeDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetGroupRequest
 * class' copy constructor.
 */
DescribeDatasetGroupRequestPrivate::DescribeDatasetGroupRequestPrivate(
    const DescribeDatasetGroupRequestPrivate &other, DescribeDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
