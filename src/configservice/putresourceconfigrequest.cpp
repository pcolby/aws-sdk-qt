// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourceconfigrequest.h"
#include "putresourceconfigrequest_p.h"
#include "putresourceconfigresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::PutResourceConfigRequest
 * \brief The PutResourceConfigRequest class provides an interface for ConfigService PutResourceConfig requests.
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
 * \sa ConfigServiceClient::putResourceConfig
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourceConfigRequest::PutResourceConfigRequest(const PutResourceConfigRequest &other)
    : ConfigServiceRequest(new PutResourceConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourceConfigRequest object.
 */
PutResourceConfigRequest::PutResourceConfigRequest()
    : ConfigServiceRequest(new PutResourceConfigRequestPrivate(ConfigServiceRequest::PutResourceConfigAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourceConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourceConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourceConfigRequest::response(QNetworkReply * const reply) const
{
    return new PutResourceConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::PutResourceConfigRequestPrivate
 * \brief The PutResourceConfigRequestPrivate class provides private implementation for PutResourceConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a PutResourceConfigRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
PutResourceConfigRequestPrivate::PutResourceConfigRequestPrivate(
    const ConfigServiceRequest::Action action, PutResourceConfigRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourceConfigRequest
 * class' copy constructor.
 */
PutResourceConfigRequestPrivate::PutResourceConfigRequestPrivate(
    const PutResourceConfigRequestPrivate &other, PutResourceConfigRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
