// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserdefinedfunctionrequest.h"
#include "updateuserdefinedfunctionrequest_p.h"
#include "updateuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionRequest
 * \brief The UpdateUserDefinedFunctionRequest class provides an interface for Glue UpdateUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest(const UpdateUserDefinedFunctionRequest &other)
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserDefinedFunctionRequest object.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest()
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(GlueRequest::UpdateUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionRequestPrivate
 * \brief The UpdateUserDefinedFunctionRequestPrivate class provides private implementation for UpdateUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateUserDefinedFunctionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, UpdateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserDefinedFunctionRequest
 * class' copy constructor.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const UpdateUserDefinedFunctionRequestPrivate &other, UpdateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
