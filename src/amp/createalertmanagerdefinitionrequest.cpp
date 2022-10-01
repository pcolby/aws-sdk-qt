// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalertmanagerdefinitionrequest.h"
#include "createalertmanagerdefinitionrequest_p.h"
#include "createalertmanagerdefinitionresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateAlertManagerDefinitionRequest
 * \brief The CreateAlertManagerDefinitionRequest class provides an interface for Amp CreateAlertManagerDefinition requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createAlertManagerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAlertManagerDefinitionRequest::CreateAlertManagerDefinitionRequest(const CreateAlertManagerDefinitionRequest &other)
    : AmpRequest(new CreateAlertManagerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAlertManagerDefinitionRequest object.
 */
CreateAlertManagerDefinitionRequest::CreateAlertManagerDefinitionRequest()
    : AmpRequest(new CreateAlertManagerDefinitionRequestPrivate(AmpRequest::CreateAlertManagerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAlertManagerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAlertManagerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAlertManagerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateAlertManagerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::CreateAlertManagerDefinitionRequestPrivate
 * \brief The CreateAlertManagerDefinitionRequestPrivate class provides private implementation for CreateAlertManagerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateAlertManagerDefinitionRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
CreateAlertManagerDefinitionRequestPrivate::CreateAlertManagerDefinitionRequestPrivate(
    const AmpRequest::Action action, CreateAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAlertManagerDefinitionRequest
 * class' copy constructor.
 */
CreateAlertManagerDefinitionRequestPrivate::CreateAlertManagerDefinitionRequestPrivate(
    const CreateAlertManagerDefinitionRequestPrivate &other, CreateAlertManagerDefinitionRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
