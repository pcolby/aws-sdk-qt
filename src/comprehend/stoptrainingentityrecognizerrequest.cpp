// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptrainingentityrecognizerrequest.h"
#include "stoptrainingentityrecognizerrequest_p.h"
#include "stoptrainingentityrecognizerresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTrainingEntityRecognizerRequest
 * \brief The StopTrainingEntityRecognizerRequest class provides an interface for Comprehend StopTrainingEntityRecognizer requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTrainingEntityRecognizer
 */

/*!
 * Constructs a copy of \a other.
 */
StopTrainingEntityRecognizerRequest::StopTrainingEntityRecognizerRequest(const StopTrainingEntityRecognizerRequest &other)
    : ComprehendRequest(new StopTrainingEntityRecognizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTrainingEntityRecognizerRequest object.
 */
StopTrainingEntityRecognizerRequest::StopTrainingEntityRecognizerRequest()
    : ComprehendRequest(new StopTrainingEntityRecognizerRequestPrivate(ComprehendRequest::StopTrainingEntityRecognizerAction, this))
{

}

/*!
 * \reimp
 */
bool StopTrainingEntityRecognizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTrainingEntityRecognizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTrainingEntityRecognizerRequest::response(QNetworkReply * const reply) const
{
    return new StopTrainingEntityRecognizerResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopTrainingEntityRecognizerRequestPrivate
 * \brief The StopTrainingEntityRecognizerRequestPrivate class provides private implementation for StopTrainingEntityRecognizerRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTrainingEntityRecognizerRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopTrainingEntityRecognizerRequestPrivate::StopTrainingEntityRecognizerRequestPrivate(
    const ComprehendRequest::Action action, StopTrainingEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTrainingEntityRecognizerRequest
 * class' copy constructor.
 */
StopTrainingEntityRecognizerRequestPrivate::StopTrainingEntityRecognizerRequestPrivate(
    const StopTrainingEntityRecognizerRequestPrivate &other, StopTrainingEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
