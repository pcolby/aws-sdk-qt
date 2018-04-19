/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describesuggestersrequest.h"
#include "describesuggestersrequest_p.h"
#include "describesuggestersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeSuggestersRequest
 * \brief The DescribeSuggestersRequest class provides an interface for CloudSearch DescribeSuggesters requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeSuggesters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSuggestersRequest::DescribeSuggestersRequest(const DescribeSuggestersRequest &other)
    : CloudSearchRequest(new DescribeSuggestersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSuggestersRequest object.
 */
DescribeSuggestersRequest::DescribeSuggestersRequest()
    : CloudSearchRequest(new DescribeSuggestersRequestPrivate(CloudSearchRequest::DescribeSuggestersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSuggestersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSuggestersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSuggestersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSuggestersResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeSuggestersRequestPrivate
 * \brief The DescribeSuggestersRequestPrivate class provides private implementation for DescribeSuggestersRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeSuggestersRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeSuggestersRequestPrivate::DescribeSuggestersRequestPrivate(
    const CloudSearchRequest::Action action, DescribeSuggestersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSuggestersRequest
 * class' copy constructor.
 */
DescribeSuggestersRequestPrivate::DescribeSuggestersRequestPrivate(
    const DescribeSuggestersRequestPrivate &other, DescribeSuggestersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
