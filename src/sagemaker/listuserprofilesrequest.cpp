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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
