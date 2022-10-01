// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
