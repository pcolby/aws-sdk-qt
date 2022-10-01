// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteResourcePolicyRequest
 * \brief The DeleteResourcePolicyRequest class provides an interface for Glue DeleteResourcePolicy requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : GlueRequest(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : GlueRequest(new DeleteResourcePolicyRequestPrivate(GlueRequest::DeleteResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteResourcePolicyRequestPrivate
 * \brief The DeleteResourcePolicyRequestPrivate class provides private implementation for DeleteResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteResourcePolicyRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const GlueRequest::Action action, DeleteResourcePolicyRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
