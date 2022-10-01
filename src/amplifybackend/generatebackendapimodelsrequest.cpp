// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatebackendapimodelsrequest.h"
#include "generatebackendapimodelsrequest_p.h"
#include "generatebackendapimodelsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsRequest
 * \brief The GenerateBackendAPIModelsRequest class provides an interface for AmplifyBackend GenerateBackendAPIModels requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::generateBackendAPIModels
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateBackendAPIModelsRequest::GenerateBackendAPIModelsRequest(const GenerateBackendAPIModelsRequest &other)
    : AmplifyBackendRequest(new GenerateBackendAPIModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateBackendAPIModelsRequest object.
 */
GenerateBackendAPIModelsRequest::GenerateBackendAPIModelsRequest()
    : AmplifyBackendRequest(new GenerateBackendAPIModelsRequestPrivate(AmplifyBackendRequest::GenerateBackendAPIModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateBackendAPIModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateBackendAPIModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateBackendAPIModelsRequest::response(QNetworkReply * const reply) const
{
    return new GenerateBackendAPIModelsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsRequestPrivate
 * \brief The GenerateBackendAPIModelsRequestPrivate class provides private implementation for GenerateBackendAPIModelsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GenerateBackendAPIModelsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GenerateBackendAPIModelsRequestPrivate::GenerateBackendAPIModelsRequestPrivate(
    const AmplifyBackendRequest::Action action, GenerateBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateBackendAPIModelsRequest
 * class' copy constructor.
 */
GenerateBackendAPIModelsRequestPrivate::GenerateBackendAPIModelsRequestPrivate(
    const GenerateBackendAPIModelsRequestPrivate &other, GenerateBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
