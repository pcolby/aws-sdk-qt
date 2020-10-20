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

#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionrequest_p.h"
#include "createeventsubscriptionresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::CreateEventSubscriptionRequest
 * \brief The CreateEventSubscriptionRequest class provides an interface for Redshift CreateEventSubscription requests.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::createEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest(const CreateEventSubscriptionRequest &other)
    : RedshiftRequest(new CreateEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEventSubscriptionRequest object.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest()
    : RedshiftRequest(new CreateEventSubscriptionRequestPrivate(RedshiftRequest::CreateEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::CreateEventSubscriptionRequestPrivate
 * \brief The CreateEventSubscriptionRequestPrivate class provides private implementation for CreateEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a CreateEventSubscriptionRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const RedshiftRequest::Action action, CreateEventSubscriptionRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEventSubscriptionRequest
 * class' copy constructor.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const CreateEventSubscriptionRequestPrivate &other, CreateEventSubscriptionRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
