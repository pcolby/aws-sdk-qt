/*
    Copyright 2013-2021 Paul Colby

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

#include "createbatchinferencejobrequest.h"
#include "createbatchinferencejobrequest_p.h"
#include "createbatchinferencejobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateBatchInferenceJobRequest
 * \brief The CreateBatchInferenceJobRequest class provides an interface for Personalize CreateBatchInferenceJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createBatchInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBatchInferenceJobRequest::CreateBatchInferenceJobRequest(const CreateBatchInferenceJobRequest &other)
    : PersonalizeRequest(new CreateBatchInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBatchInferenceJobRequest object.
 */
CreateBatchInferenceJobRequest::CreateBatchInferenceJobRequest()
    : PersonalizeRequest(new CreateBatchInferenceJobRequestPrivate(PersonalizeRequest::CreateBatchInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBatchInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBatchInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBatchInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateBatchInferenceJobRequestPrivate
 * \brief The CreateBatchInferenceJobRequestPrivate class provides private implementation for CreateBatchInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateBatchInferenceJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateBatchInferenceJobRequestPrivate::CreateBatchInferenceJobRequestPrivate(
    const PersonalizeRequest::Action action, CreateBatchInferenceJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchInferenceJobRequest
 * class' copy constructor.
 */
CreateBatchInferenceJobRequestPrivate::CreateBatchInferenceJobRequestPrivate(
    const CreateBatchInferenceJobRequestPrivate &other, CreateBatchInferenceJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
