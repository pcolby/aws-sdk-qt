// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventactionrequest.h"
#include "deleteeventactionrequest_p.h"
#include "deleteeventactionresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::DeleteEventActionRequest
 * \brief The DeleteEventActionRequest class provides an interface for DataExchange DeleteEventAction requests.
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
 * \sa DataExchangeClient::deleteEventAction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventActionRequest::DeleteEventActionRequest(const DeleteEventActionRequest &other)
    : DataExchangeRequest(new DeleteEventActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventActionRequest object.
 */
DeleteEventActionRequest::DeleteEventActionRequest()
    : DataExchangeRequest(new DeleteEventActionRequestPrivate(DataExchangeRequest::DeleteEventActionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventActionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventActionResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::DeleteEventActionRequestPrivate
 * \brief The DeleteEventActionRequestPrivate class provides private implementation for DeleteEventActionRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DeleteEventActionRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
DeleteEventActionRequestPrivate::DeleteEventActionRequestPrivate(
    const DataExchangeRequest::Action action, DeleteEventActionRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventActionRequest
 * class' copy constructor.
 */
DeleteEventActionRequestPrivate::DeleteEventActionRequestPrivate(
    const DeleteEventActionRequestPrivate &other, DeleteEventActionRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
