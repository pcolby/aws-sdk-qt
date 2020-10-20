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

#include "deletedistributionrequest.h"
#include "deletedistributionrequest_p.h"
#include "deletedistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteDistributionRequest
 * \brief The DeleteDistributionRequest class provides an interface for CloudFront DeleteDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDistributionRequest::DeleteDistributionRequest(const DeleteDistributionRequest &other)
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDistributionRequest object.
 */
DeleteDistributionRequest::DeleteDistributionRequest()
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(CloudFrontRequest::DeleteDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDistributionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteDistributionRequestPrivate
 * \brief The DeleteDistributionRequestPrivate class provides private implementation for DeleteDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDistributionRequest
 * class' copy constructor.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const DeleteDistributionRequestPrivate &other, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
