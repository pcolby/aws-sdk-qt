// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserprofilesrequest.h"
#include "listuserprofilesrequest_p.h"
#include "listuserprofilesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListUserProfilesRequest
 * \brief The ListUserProfilesRequest class provides an interface for SageMaker ListUserProfiles requests.
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
 * \sa SageMakerClient::listUserProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserProfilesRequest::ListUserProfilesRequest(const ListUserProfilesRequest &other)
    : SageMakerRequest(new ListUserProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserProfilesRequest object.
 */
ListUserProfilesRequest::ListUserProfilesRequest()
    : SageMakerRequest(new ListUserProfilesRequestPrivate(SageMakerRequest::ListUserProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListUserProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListUserProfilesRequestPrivate
 * \brief The ListUserProfilesRequestPrivate class provides private implementation for ListUserProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListUserProfilesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListUserProfilesRequestPrivate::ListUserProfilesRequestPrivate(
    const SageMakerRequest::Action action, ListUserProfilesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserProfilesRequest
 * class' copy constructor.
 */
ListUserProfilesRequestPrivate::ListUserProfilesRequestPrivate(
    const ListUserProfilesRequestPrivate &other, ListUserProfilesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
