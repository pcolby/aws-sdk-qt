// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendconfigrequest.h"
#include "createbackendconfigrequest_p.h"
#include "createbackendconfigresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigRequest
 * \brief The CreateBackendConfigRequest class provides an interface for AmplifyBackend CreateBackendConfig requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackendConfigRequest::CreateBackendConfigRequest(const CreateBackendConfigRequest &other)
    : AmplifyBackendRequest(new CreateBackendConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackendConfigRequest object.
 */
CreateBackendConfigRequest::CreateBackendConfigRequest()
    : AmplifyBackendRequest(new CreateBackendConfigRequestPrivate(AmplifyBackendRequest::CreateBackendConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackendConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackendConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackendConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackendConfigResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigRequestPrivate
 * \brief The CreateBackendConfigRequestPrivate class provides private implementation for CreateBackendConfigRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendConfigRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
CreateBackendConfigRequestPrivate::CreateBackendConfigRequestPrivate(
    const AmplifyBackendRequest::Action action, CreateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackendConfigRequest
 * class' copy constructor.
 */
CreateBackendConfigRequestPrivate::CreateBackendConfigRequestPrivate(
    const CreateBackendConfigRequestPrivate &other, CreateBackendConfigRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
