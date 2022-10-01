// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokerevisionrequest.h"
#include "revokerevisionrequest_p.h"
#include "revokerevisionresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::RevokeRevisionRequest
 * \brief The RevokeRevisionRequest class provides an interface for DataExchange RevokeRevision requests.
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
 * \sa DataExchangeClient::revokeRevision
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeRevisionRequest::RevokeRevisionRequest(const RevokeRevisionRequest &other)
    : DataExchangeRequest(new RevokeRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeRevisionRequest object.
 */
RevokeRevisionRequest::RevokeRevisionRequest()
    : DataExchangeRequest(new RevokeRevisionRequestPrivate(DataExchangeRequest::RevokeRevisionAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeRevisionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeRevisionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeRevisionRequest::response(QNetworkReply * const reply) const
{
    return new RevokeRevisionResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::RevokeRevisionRequestPrivate
 * \brief The RevokeRevisionRequestPrivate class provides private implementation for RevokeRevisionRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a RevokeRevisionRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
RevokeRevisionRequestPrivate::RevokeRevisionRequestPrivate(
    const DataExchangeRequest::Action action, RevokeRevisionRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeRevisionRequest
 * class' copy constructor.
 */
RevokeRevisionRequestPrivate::RevokeRevisionRequestPrivate(
    const RevokeRevisionRequestPrivate &other, RevokeRevisionRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
