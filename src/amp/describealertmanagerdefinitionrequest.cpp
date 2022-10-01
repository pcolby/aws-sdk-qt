// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealertmanagerdefinitionrequest.h"
#include "describealertmanagerdefinitionrequest_p.h"
#include "describealertmanagerdefinitionresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeAlertManagerDefinitionRequest
 * \brief The DescribeAlertManagerDefinitionRequest class provides an interface for Amp DescribeAlertManagerDefinition requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeAlertManagerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlertManagerDefinitionRequest::DescribeAlertManagerDefinitionRequest(const DescribeAlertManagerDefinitionRequest &other)
    : AmpRequest(new DescribeAlertManagerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlertManagerDefinitionRequest object.
 */
DescribeAlertManagerDefinitionRequest::DescribeAlertManagerDefinitionRequest()
    : AmpRequest(new DescribeAlertManagerDefinitionRequestPrivate(AmpRequest::DescribeAlertManagerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlertManagerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlertManagerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlertManagerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlertManagerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DescribeAlertManagerDefinitionRequestPrivate
 * \brief The DescribeAlertManagerDefinitionRequestPrivate class provides private implementation for DescribeAlertManagerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeAlertManagerDefinitionRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DescribeAlertManagerDefinitionRequestPrivate::DescribeAlertManagerDefinitionRequestPrivate(
    const AmpRequest::Action action, DescribeAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlertManagerDefinitionRequest
 * class' copy constructor.
 */
DescribeAlertManagerDefinitionRequestPrivate::DescribeAlertManagerDefinitionRequestPrivate(
    const DescribeAlertManagerDefinitionRequestPrivate &other, DescribeAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
