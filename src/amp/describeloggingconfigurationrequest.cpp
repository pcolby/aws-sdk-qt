// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloggingconfigurationrequest.h"
#include "describeloggingconfigurationrequest_p.h"
#include "describeloggingconfigurationresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeLoggingConfigurationRequest
 * \brief The DescribeLoggingConfigurationRequest class provides an interface for Amp DescribeLoggingConfiguration requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeLoggingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoggingConfigurationRequest::DescribeLoggingConfigurationRequest(const DescribeLoggingConfigurationRequest &other)
    : AmpRequest(new DescribeLoggingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoggingConfigurationRequest object.
 */
DescribeLoggingConfigurationRequest::DescribeLoggingConfigurationRequest()
    : AmpRequest(new DescribeLoggingConfigurationRequestPrivate(AmpRequest::DescribeLoggingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoggingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoggingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoggingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoggingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DescribeLoggingConfigurationRequestPrivate
 * \brief The DescribeLoggingConfigurationRequestPrivate class provides private implementation for DescribeLoggingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeLoggingConfigurationRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DescribeLoggingConfigurationRequestPrivate::DescribeLoggingConfigurationRequestPrivate(
    const AmpRequest::Action action, DescribeLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoggingConfigurationRequest
 * class' copy constructor.
 */
DescribeLoggingConfigurationRequestPrivate::DescribeLoggingConfigurationRequestPrivate(
    const DescribeLoggingConfigurationRequestPrivate &other, DescribeLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
