// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableversionrequest.h"
#include "gettableversionrequest_p.h"
#include "gettableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionRequest
 * \brief The GetTableVersionRequest class provides an interface for Glue GetTableVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTableVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableVersionRequest::GetTableVersionRequest(const GetTableVersionRequest &other)
    : GlueRequest(new GetTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableVersionRequest object.
 */
GetTableVersionRequest::GetTableVersionRequest()
    : GlueRequest(new GetTableVersionRequestPrivate(GlueRequest::GetTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableVersionRequestPrivate
 * \brief The GetTableVersionRequestPrivate class provides private implementation for GetTableVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GlueRequest::Action action, GetTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionRequest
 * class' copy constructor.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GetTableVersionRequestPrivate &other, GetTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
