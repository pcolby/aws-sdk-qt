// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
