// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilterrequest.h"
#include "describefilterrequest_p.h"
#include "describefilterresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFilterRequest
 * \brief The DescribeFilterRequest class provides an interface for Personalize DescribeFilter requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFilterRequest::DescribeFilterRequest(const DescribeFilterRequest &other)
    : PersonalizeRequest(new DescribeFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFilterRequest object.
 */
DescribeFilterRequest::DescribeFilterRequest()
    : PersonalizeRequest(new DescribeFilterRequestPrivate(PersonalizeRequest::DescribeFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFilterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeFilterRequestPrivate
 * \brief The DescribeFilterRequestPrivate class provides private implementation for DescribeFilterRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFilterRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeFilterRequestPrivate::DescribeFilterRequestPrivate(
    const PersonalizeRequest::Action action, DescribeFilterRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFilterRequest
 * class' copy constructor.
 */
DescribeFilterRequestPrivate::DescribeFilterRequestPrivate(
    const DescribeFilterRequestPrivate &other, DescribeFilterRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
