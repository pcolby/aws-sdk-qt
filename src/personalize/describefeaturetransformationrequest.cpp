// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefeaturetransformationrequest.h"
#include "describefeaturetransformationrequest_p.h"
#include "describefeaturetransformationresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationRequest
 * \brief The DescribeFeatureTransformationRequest class provides an interface for Personalize DescribeFeatureTransformation requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFeatureTransformation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFeatureTransformationRequest::DescribeFeatureTransformationRequest(const DescribeFeatureTransformationRequest &other)
    : PersonalizeRequest(new DescribeFeatureTransformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFeatureTransformationRequest object.
 */
DescribeFeatureTransformationRequest::DescribeFeatureTransformationRequest()
    : PersonalizeRequest(new DescribeFeatureTransformationRequestPrivate(PersonalizeRequest::DescribeFeatureTransformationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFeatureTransformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFeatureTransformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFeatureTransformationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFeatureTransformationResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationRequestPrivate
 * \brief The DescribeFeatureTransformationRequestPrivate class provides private implementation for DescribeFeatureTransformationRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFeatureTransformationRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeFeatureTransformationRequestPrivate::DescribeFeatureTransformationRequestPrivate(
    const PersonalizeRequest::Action action, DescribeFeatureTransformationRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFeatureTransformationRequest
 * class' copy constructor.
 */
DescribeFeatureTransformationRequestPrivate::DescribeFeatureTransformationRequestPrivate(
    const DescribeFeatureTransformationRequestPrivate &other, DescribeFeatureTransformationRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
