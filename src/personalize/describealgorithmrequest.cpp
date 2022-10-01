// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealgorithmrequest.h"
#include "describealgorithmrequest_p.h"
#include "describealgorithmresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeAlgorithmRequest
 * \brief The DescribeAlgorithmRequest class provides an interface for Personalize DescribeAlgorithm requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other)
    : PersonalizeRequest(new DescribeAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlgorithmRequest object.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest()
    : PersonalizeRequest(new DescribeAlgorithmRequestPrivate(PersonalizeRequest::DescribeAlgorithmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlgorithmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlgorithmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlgorithmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlgorithmResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeAlgorithmRequestPrivate
 * \brief The DescribeAlgorithmRequestPrivate class provides private implementation for DescribeAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeAlgorithmRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const PersonalizeRequest::Action action, DescribeAlgorithmRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlgorithmRequest
 * class' copy constructor.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const DescribeAlgorithmRequestPrivate &other, DescribeAlgorithmRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
