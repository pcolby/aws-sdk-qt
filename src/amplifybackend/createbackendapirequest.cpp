// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendapirequest.h"
#include "createbackendapirequest_p.h"
#include "createbackendapiresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIRequest
 * \brief The CreateBackendAPIRequest class provides an interface for AmplifyBackend CreateBackendAPI requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAPI
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendAPIRequest::CreateBackendAPIRequest(const CreateBackendAPIRequest &other)
    : AmplifyBackendRequest(new CreateBackendAPIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendAPIRequest object.
 */
CreateBackendAPIRequest::CreateBackendAPIRequest()
    : AmplifyBackendRequest(new CreateBackendAPIRequestPrivate(AmplifyBackendRequest::CreateBackendAPIAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendAPIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendAPIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendAPIRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendAPIResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIRequestPrivate
 * \brief The CreateBackendAPIRequestPrivate class provides private implementation for CreateBackendAPIRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAPIRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendAPIRequestPrivate::CreateBackendAPIRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendAPIRequest
 * class' copy constructor.
 */
CreateBackendAPIRequestPrivate::CreateBackendAPIRequestPrivate(
    const CreateBackendAPIRequestPrivate &other, CreateBackendAPIRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
