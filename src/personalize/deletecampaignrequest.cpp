/*
    Copyright 2013-2020 Paul Colby

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

#include "deletecampaignrequest.h"
#include "deletecampaignrequest_p.h"
#include "deletecampaignresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteCampaignRequest
 * \brief The DeleteCampaignRequest class provides an interface for Personalize DeleteCampaign requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCampaignRequest::DeleteCampaignRequest(const DeleteCampaignRequest &other)
    : PersonalizeRequest(new DeleteCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCampaignRequest object.
 */
DeleteCampaignRequest::DeleteCampaignRequest()
    : PersonalizeRequest(new DeleteCampaignRequestPrivate(PersonalizeRequest::DeleteCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteCampaignRequestPrivate
 * \brief The DeleteCampaignRequestPrivate class provides private implementation for DeleteCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteCampaignRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const PersonalizeRequest::Action action, DeleteCampaignRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCampaignRequest
 * class' copy constructor.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const DeleteCampaignRequestPrivate &other, DeleteCampaignRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
