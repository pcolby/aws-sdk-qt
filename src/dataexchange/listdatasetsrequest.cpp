// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::ListDataSetsRequest
 * \brief The ListDataSetsRequest class provides an interface for DataExchange ListDataSets requests.
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
 * \sa DataExchangeClient::listDataSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSetsRequest::ListDataSetsRequest(const ListDataSetsRequest &other)
    : DataExchangeRequest(new ListDataSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSetsRequest object.
 */
ListDataSetsRequest::ListDataSetsRequest()
    : DataExchangeRequest(new ListDataSetsRequestPrivate(DataExchangeRequest::ListDataSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSetsResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::ListDataSetsRequestPrivate
 * \brief The ListDataSetsRequestPrivate class provides private implementation for ListDataSetsRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a ListDataSetsRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const DataExchangeRequest::Action action, ListDataSetsRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSetsRequest
 * class' copy constructor.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const ListDataSetsRequestPrivate &other, ListDataSetsRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
