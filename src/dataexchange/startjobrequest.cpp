// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrequest.h"
#include "startjobrequest_p.h"
#include "startjobresponse.h"
#include "dataexchangerequest_p.h"

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::StartJobRequest
 * \brief The StartJobRequest class provides an interface for DataExchange StartJob requests.
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
 * \sa DataExchangeClient::startJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartJobRequest::StartJobRequest(const StartJobRequest &other)
    : DataExchangeRequest(new StartJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartJobRequest object.
 */
StartJobRequest::StartJobRequest()
    : DataExchangeRequest(new StartJobRequestPrivate(DataExchangeRequest::StartJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartJobRequest::response(QNetworkReply * const reply) const
{
    return new StartJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataExchange::StartJobRequestPrivate
 * \brief The StartJobRequestPrivate class provides private implementation for StartJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a StartJobRequestPrivate object for DataExchange \a action,
 * with public implementation \a q.
 */
StartJobRequestPrivate::StartJobRequestPrivate(
    const DataExchangeRequest::Action action, StartJobRequest * const q)
    : DataExchangeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartJobRequest
 * class' copy constructor.
 */
StartJobRequestPrivate::StartJobRequestPrivate(
    const StartJobRequestPrivate &other, StartJobRequest * const q)
    : DataExchangeRequestPrivate(other, q)
{

}

} // namespace DataExchange
} // namespace QtAws
