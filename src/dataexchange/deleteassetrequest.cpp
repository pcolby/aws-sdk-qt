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

#include "deleteassetrequest.h"
#include "deleteassetrequest_p.h"
#include "deleteassetresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::DeleteAssetRequest
 * \brief The DeleteAssetRequest class provides an interface for DataExchange DeleteAsset requests.
 *
 * \inmodule QtAwsDataExchange
 *
 *  AWS Data Exchange is a service that makes it easy for AWS customers to exchange data in the cloud. You can use the AWS
 *  Data Exchange APIs to create, update, manage, and access file-based data set in the AWS
 * 
 *  Cloud>
 * 
 *  As a subscriber, you can view and access the data sets that you have an entitlement to through a subscription. You can
 *  use the APIS to download or copy your entitled data sets to Amazon S3 for use across a variety of AWS analytics and
 *  machine learning
 * 
 *  services>
 * 
 *  As a provider, you can create and manage your data sets that you would like to publish to a product. Being able to
 *  package and provide your data sets into products requires a few steps to determine eligibility. For more information,
 *  visit the AWS Data Exchange User
 * 
 *  Guide>
 * 
 *  A data set is a collection of data that can be changed or updated over time. Data sets can be updated using revisions,
 *  which represent a new version or incremental change to a data set. A revision contains one or more assets. An asset in
 *  AWS Data Exchange is a piece of data that can be stored as an Amazon S3 object. The asset can be a structured data file,
 *  an image file, or some other data file. Jobs are asynchronous import or export operations used to create or copy
 *
 * \sa DataExchangeClient::deleteAsset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssetRequest::DeleteAssetRequest(const DeleteAssetRequest &other)
    : DataExchangeRequest(new DeleteAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssetRequest object.
 */
DeleteAssetRequest::DeleteAssetRequest()
    : DataExchangeRequest(new DeleteAssetRequestPrivate(DataExchangeRequest::DeleteAssetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssetResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::DeleteAssetRequestPrivate
 * \brief The DeleteAssetRequestPrivate class provides private implementation for DeleteAssetRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DeleteAssetRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const DataExchangeRequest::Action action, DeleteAssetRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssetRequest
 * class' copy constructor.
 */
DeleteAssetRequestPrivate::DeleteAssetRequestPrivate(
    const DeleteAssetRequestPrivate &other, DeleteAssetRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
