// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createflowrequest.h"
#include "createflowrequest_p.h"
#include "createflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::CreateFlowRequest
 * \brief The CreateFlowRequest class provides an interface for MediaConnect CreateFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::createFlow
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFlowRequest::CreateFlowRequest(const CreateFlowRequest &other)
    : MediaConnectRequest(new CreateFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFlowRequest object.
 */
CreateFlowRequest::CreateFlowRequest()
    : MediaConnectRequest(new CreateFlowRequestPrivate(MediaConnectRequest::CreateFlowAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFlowRequest::response(QNetworkReply * const reply) const
{
    return new CreateFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::CreateFlowRequestPrivate
 * \brief The CreateFlowRequestPrivate class provides private implementation for CreateFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a CreateFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
CreateFlowRequestPrivate::CreateFlowRequestPrivate(
    const MediaConnectRequest::Action action, CreateFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFlowRequest
 * class' copy constructor.
 */
CreateFlowRequestPrivate::CreateFlowRequestPrivate(
    const CreateFlowRequestPrivate &other, CreateFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
