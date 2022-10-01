// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventtrackerrequest.h"
#include "describeeventtrackerrequest_p.h"
#include "describeeventtrackerresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeEventTrackerRequest
 * \brief The DescribeEventTrackerRequest class provides an interface for Personalize DescribeEventTracker requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeEventTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventTrackerRequest::DescribeEventTrackerRequest(const DescribeEventTrackerRequest &other)
    : PersonalizeRequest(new DescribeEventTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventTrackerRequest object.
 */
DescribeEventTrackerRequest::DescribeEventTrackerRequest()
    : PersonalizeRequest(new DescribeEventTrackerRequestPrivate(PersonalizeRequest::DescribeEventTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeEventTrackerRequestPrivate
 * \brief The DescribeEventTrackerRequestPrivate class provides private implementation for DescribeEventTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeEventTrackerRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeEventTrackerRequestPrivate::DescribeEventTrackerRequestPrivate(
    const PersonalizeRequest::Action action, DescribeEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventTrackerRequest
 * class' copy constructor.
 */
DescribeEventTrackerRequestPrivate::DescribeEventTrackerRequestPrivate(
    const DescribeEventTrackerRequestPrivate &other, DescribeEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
