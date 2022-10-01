// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecommenderrequest.h"
#include "describerecommenderrequest_p.h"
#include "describerecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeRecommenderRequest
 * \brief The DescribeRecommenderRequest class provides an interface for Personalize DescribeRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecommenderRequest::DescribeRecommenderRequest(const DescribeRecommenderRequest &other)
    : PersonalizeRequest(new DescribeRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecommenderRequest object.
 */
DescribeRecommenderRequest::DescribeRecommenderRequest()
    : PersonalizeRequest(new DescribeRecommenderRequestPrivate(PersonalizeRequest::DescribeRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeRecommenderRequestPrivate
 * \brief The DescribeRecommenderRequestPrivate class provides private implementation for DescribeRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeRecommenderRequestPrivate::DescribeRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, DescribeRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecommenderRequest
 * class' copy constructor.
 */
DescribeRecommenderRequestPrivate::DescribeRecommenderRequestPrivate(
    const DescribeRecommenderRequestPrivate &other, DescribeRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
