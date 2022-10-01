// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putalertmanagerdefinitionrequest.h"
#include "putalertmanagerdefinitionrequest_p.h"
#include "putalertmanagerdefinitionresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::PutAlertManagerDefinitionRequest
 * \brief The PutAlertManagerDefinitionRequest class provides an interface for Amp PutAlertManagerDefinition requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::putAlertManagerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
PutAlertManagerDefinitionRequest::PutAlertManagerDefinitionRequest(const PutAlertManagerDefinitionRequest &other)
    : AmpRequest(new PutAlertManagerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAlertManagerDefinitionRequest object.
 */
PutAlertManagerDefinitionRequest::PutAlertManagerDefinitionRequest()
    : AmpRequest(new PutAlertManagerDefinitionRequestPrivate(AmpRequest::PutAlertManagerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool PutAlertManagerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAlertManagerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAlertManagerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new PutAlertManagerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::PutAlertManagerDefinitionRequestPrivate
 * \brief The PutAlertManagerDefinitionRequestPrivate class provides private implementation for PutAlertManagerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a PutAlertManagerDefinitionRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
PutAlertManagerDefinitionRequestPrivate::PutAlertManagerDefinitionRequestPrivate(
    const AmpRequest::Action action, PutAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAlertManagerDefinitionRequest
 * class' copy constructor.
 */
PutAlertManagerDefinitionRequestPrivate::PutAlertManagerDefinitionRequestPrivate(
    const PutAlertManagerDefinitionRequestPrivate &other, PutAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
