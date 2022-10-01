// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendapimodelsrequest.h"
#include "getbackendapimodelsrequest_p.h"
#include "getbackendapimodelsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsRequest
 * \brief The GetBackendAPIModelsRequest class provides an interface for AmplifyBackend GetBackendAPIModels requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPIModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackendAPIModelsRequest::GetBackendAPIModelsRequest(const GetBackendAPIModelsRequest &other)
    : AmplifyBackendRequest(new GetBackendAPIModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackendAPIModelsRequest object.
 */
GetBackendAPIModelsRequest::GetBackendAPIModelsRequest()
    : AmplifyBackendRequest(new GetBackendAPIModelsRequestPrivate(AmplifyBackendRequest::GetBackendAPIModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackendAPIModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackendAPIModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackendAPIModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetBackendAPIModelsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsRequestPrivate
 * \brief The GetBackendAPIModelsRequestPrivate class provides private implementation for GetBackendAPIModelsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIModelsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
GetBackendAPIModelsRequestPrivate::GetBackendAPIModelsRequestPrivate(
    const AmplifyBackendRequest::Action action, GetBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackendAPIModelsRequest
 * class' copy constructor.
 */
GetBackendAPIModelsRequestPrivate::GetBackendAPIModelsRequestPrivate(
    const GetBackendAPIModelsRequestPrivate &other, GetBackendAPIModelsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
