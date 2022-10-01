// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomentitytyperequest.h"
#include "getcustomentitytyperequest_p.h"
#include "getcustomentitytyperesponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCustomEntityTypeRequest
 * \brief The GetCustomEntityTypeRequest class provides an interface for Glue GetCustomEntityType requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCustomEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomEntityTypeRequest::GetCustomEntityTypeRequest(const GetCustomEntityTypeRequest &other)
    : GlueRequest(new GetCustomEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomEntityTypeRequest object.
 */
GetCustomEntityTypeRequest::GetCustomEntityTypeRequest()
    : GlueRequest(new GetCustomEntityTypeRequestPrivate(GlueRequest::GetCustomEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetCustomEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCustomEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCustomEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetCustomEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCustomEntityTypeRequestPrivate
 * \brief The GetCustomEntityTypeRequestPrivate class provides private implementation for GetCustomEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCustomEntityTypeRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCustomEntityTypeRequestPrivate::GetCustomEntityTypeRequestPrivate(
    const GlueRequest::Action action, GetCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCustomEntityTypeRequest
 * class' copy constructor.
 */
GetCustomEntityTypeRequestPrivate::GetCustomEntityTypeRequestPrivate(
    const GetCustomEntityTypeRequestPrivate &other, GetCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
