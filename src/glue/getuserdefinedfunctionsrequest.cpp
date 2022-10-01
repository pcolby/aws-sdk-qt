// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserdefinedfunctionsrequest.h"
#include "getuserdefinedfunctionsrequest_p.h"
#include "getuserdefinedfunctionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsRequest
 * \brief The GetUserDefinedFunctionsRequest class provides an interface for Glue GetUserDefinedFunctions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUserDefinedFunctions
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest(const GetUserDefinedFunctionsRequest &other)
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserDefinedFunctionsRequest object.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest()
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(GlueRequest::GetUserDefinedFunctionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserDefinedFunctionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserDefinedFunctionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserDefinedFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsRequestPrivate
 * \brief The GetUserDefinedFunctionsRequestPrivate class provides private implementation for GetUserDefinedFunctionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionsRequest
 * class' copy constructor.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GetUserDefinedFunctionsRequestPrivate &other, GetUserDefinedFunctionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
