// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepolicyrequest.h"
#include "getresourcepolicyrequest_p.h"
#include "getresourcepolicyresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetResourcePolicyRequest
 * \brief The GetResourcePolicyRequest class provides an interface for Glue GetResourcePolicy requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest(const GetResourcePolicyRequest &other)
    : GlueRequest(new GetResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePolicyRequest object.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest()
    : GlueRequest(new GetResourcePolicyRequestPrivate(GlueRequest::GetResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetResourcePolicyRequestPrivate
 * \brief The GetResourcePolicyRequestPrivate class provides private implementation for GetResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetResourcePolicyRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const GlueRequest::Action action, GetResourcePolicyRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePolicyRequest
 * class' copy constructor.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const GetResourcePolicyRequestPrivate &other, GetResourcePolicyRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
