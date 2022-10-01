// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationaggregatorrequest.h"
#include "putconfigurationaggregatorrequest_p.h"
#include "putconfigurationaggregatorresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::PutConfigurationAggregatorRequest
 * \brief The PutConfigurationAggregatorRequest class provides an interface for ConfigService PutConfigurationAggregator requests.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>Config</fullname>
 * 
 *  Config provides a way to keep track of the configurations of all the Amazon Web Services resources associated with your
 *  Amazon Web Services account. You can use Config to get the current and historical configurations of each Amazon Web
 *  Services resource and also to get information about the relationship between the resources. An Amazon Web Services
 *  resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block Store (EBS) volume, an elastic network
 *  Interface (ENI), or a security group. For a complete list of resources currently supported by Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  Amazon Web Services
 * 
 *  resources</a>>
 * 
 *  You can access and manage Config through the Amazon Web Services Management Console, the Amazon Web Services Command
 *  Line Interface (Amazon Web Services CLI), the Config API, or the Amazon Web Services SDKs for Config. This reference
 *  guide contains documentation for the Config API and the Amazon Web Services CLI commands that you can use to manage
 *  Config. The Config API uses the Signature Version 4 protocol for signing requests. For more information about how to
 *  sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about Config features and their associated actions or commands, as well as how to work with
 *  Amazon Web Services Management Console, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is Config</a> in the <i>Config
 *  Developer
 *
 * \sa ConfigServiceClient::putConfigurationAggregator
 */

/*!
 * Constructs a copy of \a other.
 */
PutConfigurationAggregatorRequest::PutConfigurationAggregatorRequest(const PutConfigurationAggregatorRequest &other)
    : ConfigServiceRequest(new PutConfigurationAggregatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConfigurationAggregatorRequest object.
 */
PutConfigurationAggregatorRequest::PutConfigurationAggregatorRequest()
    : ConfigServiceRequest(new PutConfigurationAggregatorRequestPrivate(ConfigServiceRequest::PutConfigurationAggregatorAction, this))
{

}

/*!
 * \reimp
 */
bool PutConfigurationAggregatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConfigurationAggregatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationAggregatorRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationAggregatorResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::PutConfigurationAggregatorRequestPrivate
 * \brief The PutConfigurationAggregatorRequestPrivate class provides private implementation for PutConfigurationAggregatorRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a PutConfigurationAggregatorRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
PutConfigurationAggregatorRequestPrivate::PutConfigurationAggregatorRequestPrivate(
    const ConfigServiceRequest::Action action, PutConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationAggregatorRequest
 * class' copy constructor.
 */
PutConfigurationAggregatorRequestPrivate::PutConfigurationAggregatorRequestPrivate(
    const PutConfigurationAggregatorRequestPrivate &other, PutConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
