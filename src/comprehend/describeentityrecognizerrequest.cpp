// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeentityrecognizerrequest.h"
#include "describeentityrecognizerrequest_p.h"
#include "describeentityrecognizerresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEntityRecognizerRequest
 * \brief The DescribeEntityRecognizerRequest class provides an interface for Comprehend DescribeEntityRecognizer requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEntityRecognizer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEntityRecognizerRequest::DescribeEntityRecognizerRequest(const DescribeEntityRecognizerRequest &other)
    : ComprehendRequest(new DescribeEntityRecognizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEntityRecognizerRequest object.
 */
DescribeEntityRecognizerRequest::DescribeEntityRecognizerRequest()
    : ComprehendRequest(new DescribeEntityRecognizerRequestPrivate(ComprehendRequest::DescribeEntityRecognizerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEntityRecognizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEntityRecognizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEntityRecognizerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEntityRecognizerResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeEntityRecognizerRequestPrivate
 * \brief The DescribeEntityRecognizerRequestPrivate class provides private implementation for DescribeEntityRecognizerRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEntityRecognizerRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeEntityRecognizerRequestPrivate::DescribeEntityRecognizerRequestPrivate(
    const ComprehendRequest::Action action, DescribeEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEntityRecognizerRequest
 * class' copy constructor.
 */
DescribeEntityRecognizerRequestPrivate::DescribeEntityRecognizerRequestPrivate(
    const DescribeEntityRecognizerRequestPrivate &other, DescribeEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
