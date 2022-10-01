// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealertmanagerdefinitionrequest.h"
#include "deletealertmanagerdefinitionrequest_p.h"
#include "deletealertmanagerdefinitionresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteAlertManagerDefinitionRequest
 * \brief The DeleteAlertManagerDefinitionRequest class provides an interface for Amp DeleteAlertManagerDefinition requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteAlertManagerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlertManagerDefinitionRequest::DeleteAlertManagerDefinitionRequest(const DeleteAlertManagerDefinitionRequest &other)
    : AmpRequest(new DeleteAlertManagerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlertManagerDefinitionRequest object.
 */
DeleteAlertManagerDefinitionRequest::DeleteAlertManagerDefinitionRequest()
    : AmpRequest(new DeleteAlertManagerDefinitionRequestPrivate(AmpRequest::DeleteAlertManagerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlertManagerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlertManagerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlertManagerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlertManagerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DeleteAlertManagerDefinitionRequestPrivate
 * \brief The DeleteAlertManagerDefinitionRequestPrivate class provides private implementation for DeleteAlertManagerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteAlertManagerDefinitionRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DeleteAlertManagerDefinitionRequestPrivate::DeleteAlertManagerDefinitionRequestPrivate(
    const AmpRequest::Action action, DeleteAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlertManagerDefinitionRequest
 * class' copy constructor.
 */
DeleteAlertManagerDefinitionRequestPrivate::DeleteAlertManagerDefinitionRequestPrivate(
    const DeleteAlertManagerDefinitionRequestPrivate &other, DeleteAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
