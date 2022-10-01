// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserdefinedfunctionrequest.h"
#include "getuserdefinedfunctionrequest_p.h"
#include "getuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionRequest
 * \brief The GetUserDefinedFunctionRequest class provides an interface for Glue GetUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest(const GetUserDefinedFunctionRequest &other)
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserDefinedFunctionRequest object.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest()
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(GlueRequest::GetUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionRequestPrivate
 * \brief The GetUserDefinedFunctionRequestPrivate class provides private implementation for GetUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionRequest
 * class' copy constructor.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GetUserDefinedFunctionRequestPrivate &other, GetUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
