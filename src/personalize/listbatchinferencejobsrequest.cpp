// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchinferencejobsrequest.h"
#include "listbatchinferencejobsrequest_p.h"
#include "listbatchinferencejobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsRequest
 * \brief The ListBatchInferenceJobsRequest class provides an interface for Personalize ListBatchInferenceJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchInferenceJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchInferenceJobsRequest::ListBatchInferenceJobsRequest(const ListBatchInferenceJobsRequest &other)
    : PersonalizeRequest(new ListBatchInferenceJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchInferenceJobsRequest object.
 */
ListBatchInferenceJobsRequest::ListBatchInferenceJobsRequest()
    : PersonalizeRequest(new ListBatchInferenceJobsRequestPrivate(PersonalizeRequest::ListBatchInferenceJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchInferenceJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchInferenceJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchInferenceJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchInferenceJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsRequestPrivate
 * \brief The ListBatchInferenceJobsRequestPrivate class provides private implementation for ListBatchInferenceJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchInferenceJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListBatchInferenceJobsRequestPrivate::ListBatchInferenceJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListBatchInferenceJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchInferenceJobsRequest
 * class' copy constructor.
 */
ListBatchInferenceJobsRequestPrivate::ListBatchInferenceJobsRequestPrivate(
    const ListBatchInferenceJobsRequestPrivate &other, ListBatchInferenceJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
