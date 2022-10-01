// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedatashareconsumerrequest.h"
#include "associatedatashareconsumerrequest_p.h"
#include "associatedatashareconsumerresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::AssociateDataShareConsumerRequest
 * \brief The AssociateDataShareConsumerRequest class provides an interface for Redshift AssociateDataShareConsumer requests.
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
 * \sa RedshiftClient::associateDataShareConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDataShareConsumerRequest::AssociateDataShareConsumerRequest(const AssociateDataShareConsumerRequest &other)
    : RedshiftRequest(new AssociateDataShareConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDataShareConsumerRequest object.
 */
AssociateDataShareConsumerRequest::AssociateDataShareConsumerRequest()
    : RedshiftRequest(new AssociateDataShareConsumerRequestPrivate(RedshiftRequest::AssociateDataShareConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDataShareConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDataShareConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDataShareConsumerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDataShareConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::AssociateDataShareConsumerRequestPrivate
 * \brief The AssociateDataShareConsumerRequestPrivate class provides private implementation for AssociateDataShareConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a AssociateDataShareConsumerRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
AssociateDataShareConsumerRequestPrivate::AssociateDataShareConsumerRequestPrivate(
    const RedshiftRequest::Action action, AssociateDataShareConsumerRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDataShareConsumerRequest
 * class' copy constructor.
 */
AssociateDataShareConsumerRequestPrivate::AssociateDataShareConsumerRequestPrivate(
    const AssociateDataShareConsumerRequestPrivate &other, AssociateDataShareConsumerRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
