// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetrequest.h"
#include "getdatasetrequest_p.h"
#include "getdatasetresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::GetDataSetRequest
 * \brief The GetDataSetRequest class provides an interface for DataExchange GetDataSet requests.
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
 * \sa DataExchangeClient::getDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataSetRequest::GetDataSetRequest(const GetDataSetRequest &other)
    : DataExchangeRequest(new GetDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataSetRequest object.
 */
GetDataSetRequest::GetDataSetRequest()
    : DataExchangeRequest(new GetDataSetRequestPrivate(DataExchangeRequest::GetDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSetRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::GetDataSetRequestPrivate
 * \brief The GetDataSetRequestPrivate class provides private implementation for GetDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a GetDataSetRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
GetDataSetRequestPrivate::GetDataSetRequestPrivate(
    const DataExchangeRequest::Action action, GetDataSetRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataSetRequest
 * class' copy constructor.
 */
GetDataSetRequestPrivate::GetDataSetRequestPrivate(
    const GetDataSetRequestPrivate &other, GetDataSetRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
