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

#include "describecampaignrequest.h"
#include "describecampaignrequest_p.h"
#include "describecampaignresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeCampaignRequest
 * \brief The DescribeCampaignRequest class provides an interface for Personalize DescribeCampaign requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCampaignRequest::DescribeCampaignRequest(const DescribeCampaignRequest &other)
    : PersonalizeRequest(new DescribeCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCampaignRequest object.
 */
DescribeCampaignRequest::DescribeCampaignRequest()
    : PersonalizeRequest(new DescribeCampaignRequestPrivate(PersonalizeRequest::DescribeCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeCampaignRequestPrivate
 * \brief The DescribeCampaignRequestPrivate class provides private implementation for DescribeCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeCampaignRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const PersonalizeRequest::Action action, DescribeCampaignRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCampaignRequest
 * class' copy constructor.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const DescribeCampaignRequestPrivate &other, DescribeCampaignRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
