// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeDatasetRequest
 * \brief The DescribeDatasetRequest class provides an interface for Personalize DescribeDataset requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : PersonalizeRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : PersonalizeRequest(new DescribeDatasetRequestPrivate(PersonalizeRequest::DescribeDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeDatasetRequestPrivate
 * \brief The DescribeDatasetRequestPrivate class provides private implementation for DescribeDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeDatasetRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const PersonalizeRequest::Action action, DescribeDatasetRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetRequest
 * class' copy constructor.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DescribeDatasetRequestPrivate &other, DescribeDatasetRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
