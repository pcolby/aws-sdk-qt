// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbatchsegmentjobrequest.h"
#include "createbatchsegmentjobrequest_p.h"
#include "createbatchsegmentjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobRequest
 * \brief The CreateBatchSegmentJobRequest class provides an interface for Personalize CreateBatchSegmentJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createBatchSegmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBatchSegmentJobRequest::CreateBatchSegmentJobRequest(const CreateBatchSegmentJobRequest &other)
    : PersonalizeRequest(new CreateBatchSegmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBatchSegmentJobRequest object.
 */
CreateBatchSegmentJobRequest::CreateBatchSegmentJobRequest()
    : PersonalizeRequest(new CreateBatchSegmentJobRequestPrivate(PersonalizeRequest::CreateBatchSegmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBatchSegmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBatchSegmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBatchSegmentJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchSegmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobRequestPrivate
 * \brief The CreateBatchSegmentJobRequestPrivate class provides private implementation for CreateBatchSegmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateBatchSegmentJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateBatchSegmentJobRequestPrivate::CreateBatchSegmentJobRequestPrivate(
    const PersonalizeRequest::Action action, CreateBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchSegmentJobRequest
 * class' copy constructor.
 */
CreateBatchSegmentJobRequestPrivate::CreateBatchSegmentJobRequestPrivate(
    const CreateBatchSegmentJobRequestPrivate &other, CreateBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
