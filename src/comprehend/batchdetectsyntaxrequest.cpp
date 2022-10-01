// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetectsyntaxrequest.h"
#include "batchdetectsyntaxrequest_p.h"
#include "batchdetectsyntaxresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxRequest
 * \brief The BatchDetectSyntaxRequest class provides an interface for Comprehend BatchDetectSyntax requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectSyntax
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectSyntaxRequest::BatchDetectSyntaxRequest(const BatchDetectSyntaxRequest &other)
    : ComprehendRequest(new BatchDetectSyntaxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectSyntaxRequest object.
 */
BatchDetectSyntaxRequest::BatchDetectSyntaxRequest()
    : ComprehendRequest(new BatchDetectSyntaxRequestPrivate(ComprehendRequest::BatchDetectSyntaxAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectSyntaxRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectSyntaxResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectSyntaxRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectSyntaxResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxRequestPrivate
 * \brief The BatchDetectSyntaxRequestPrivate class provides private implementation for BatchDetectSyntaxRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectSyntaxRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectSyntaxRequestPrivate::BatchDetectSyntaxRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectSyntaxRequest
 * class' copy constructor.
 */
BatchDetectSyntaxRequestPrivate::BatchDetectSyntaxRequestPrivate(
    const BatchDetectSyntaxRequestPrivate &other, BatchDetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
