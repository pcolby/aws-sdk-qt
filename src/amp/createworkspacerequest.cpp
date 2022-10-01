// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspacerequest.h"
#include "createworkspacerequest_p.h"
#include "createworkspaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateWorkspaceRequest
 * \brief The CreateWorkspaceRequest class provides an interface for Amp CreateWorkspace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest(const CreateWorkspaceRequest &other)
    : AmpRequest(new CreateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspaceRequest object.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest()
    : AmpRequest(new CreateWorkspaceRequestPrivate(AmpRequest::CreateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::CreateWorkspaceRequestPrivate
 * \brief The CreateWorkspaceRequestPrivate class provides private implementation for CreateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateWorkspaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const AmpRequest::Action action, CreateWorkspaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspaceRequest
 * class' copy constructor.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const CreateWorkspaceRequestPrivate &other, CreateWorkspaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
