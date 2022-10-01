// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendrequest.h"
#include "createbackendrequest_p.h"
#include "createbackendresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendRequest
 * \brief The CreateBackendRequest class provides an interface for AmplifyBackend CreateBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackend
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendRequest::CreateBackendRequest(const CreateBackendRequest &other)
    : AmplifyBackendRequest(new CreateBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendRequest object.
 */
CreateBackendRequest::CreateBackendRequest()
    : AmplifyBackendRequest(new CreateBackendRequestPrivate(AmplifyBackendRequest::CreateBackendAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendRequestPrivate
 * \brief The CreateBackendRequestPrivate class provides private implementation for CreateBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendRequestPrivate::CreateBackendRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendRequest
 * class' copy constructor.
 */
CreateBackendRequestPrivate::CreateBackendRequestPrivate(
    const CreateBackendRequestPrivate &other, CreateBackendRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
