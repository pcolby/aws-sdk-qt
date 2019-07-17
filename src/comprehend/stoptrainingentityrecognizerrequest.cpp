/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
