// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlabelingjobsforworkteamrequest.h"
#include "listlabelingjobsforworkteamrequest_p.h"
#include "listlabelingjobsforworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamRequest
 * \brief The ListLabelingJobsForWorkteamRequest class provides an interface for SageMaker ListLabelingJobsForWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listLabelingJobsForWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
ListLabelingJobsForWorkteamRequest::ListLabelingJobsForWorkteamRequest(const ListLabelingJobsForWorkteamRequest &other)
    : SageMakerRequest(new ListLabelingJobsForWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLabelingJobsForWorkteamRequest object.
 */
ListLabelingJobsForWorkteamRequest::ListLabelingJobsForWorkteamRequest()
    : SageMakerRequest(new ListLabelingJobsForWorkteamRequestPrivate(SageMakerRequest::ListLabelingJobsForWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool ListLabelingJobsForWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLabelingJobsForWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLabelingJobsForWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new ListLabelingJobsForWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamRequestPrivate
 * \brief The ListLabelingJobsForWorkteamRequestPrivate class provides private implementation for ListLabelingJobsForWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListLabelingJobsForWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListLabelingJobsForWorkteamRequestPrivate::ListLabelingJobsForWorkteamRequestPrivate(
    const SageMakerRequest::Action action, ListLabelingJobsForWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLabelingJobsForWorkteamRequest
 * class' copy constructor.
 */
ListLabelingJobsForWorkteamRequestPrivate::ListLabelingJobsForWorkteamRequestPrivate(
    const ListLabelingJobsForWorkteamRequestPrivate &other, ListLabelingJobsForWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
