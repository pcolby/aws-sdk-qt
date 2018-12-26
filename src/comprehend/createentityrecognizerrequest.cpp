/*
    Copyright 2013-2018 Paul Colby

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

#include "createentityrecognizerrequest.h"
#include "createentityrecognizerrequest_p.h"
#include "createentityrecognizerresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerRequest
 * \brief The CreateEntityRecognizerRequest class provides an interface for Comprehend CreateEntityRecognizer requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createEntityRecognizer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEntityRecognizerRequest::CreateEntityRecognizerRequest(const CreateEntityRecognizerRequest &other)
    : ComprehendRequest(new CreateEntityRecognizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEntityRecognizerRequest object.
 */
CreateEntityRecognizerRequest::CreateEntityRecognizerRequest()
    : ComprehendRequest(new CreateEntityRecognizerRequestPrivate(ComprehendRequest::CreateEntityRecognizerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEntityRecognizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEntityRecognizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEntityRecognizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateEntityRecognizerResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::CreateEntityRecognizerRequestPrivate
 * \brief The CreateEntityRecognizerRequestPrivate class provides private implementation for CreateEntityRecognizerRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateEntityRecognizerRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
CreateEntityRecognizerRequestPrivate::CreateEntityRecognizerRequestPrivate(
    const ComprehendRequest::Action action, CreateEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEntityRecognizerRequest
 * class' copy constructor.
 */
CreateEntityRecognizerRequestPrivate::CreateEntityRecognizerRequestPrivate(
    const CreateEntityRecognizerRequestPrivate &other, CreateEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
