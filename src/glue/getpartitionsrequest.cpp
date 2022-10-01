// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartitionsrequest.h"
#include "getpartitionsrequest_p.h"
#include "getpartitionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionsRequest
 * \brief The GetPartitionsRequest class provides an interface for Glue GetPartitions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartitions
 */

/*!
 * Constructs a copy of \a other.
 */
GetPartitionsRequest::GetPartitionsRequest(const GetPartitionsRequest &other)
    : GlueRequest(new GetPartitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPartitionsRequest object.
 */
GetPartitionsRequest::GetPartitionsRequest()
    : GlueRequest(new GetPartitionsRequestPrivate(GlueRequest::GetPartitionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetPartitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPartitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPartitionsRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetPartitionsRequestPrivate
 * \brief The GetPartitionsRequestPrivate class provides private implementation for GetPartitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GlueRequest::Action action, GetPartitionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionsRequest
 * class' copy constructor.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GetPartitionsRequestPrivate &other, GetPartitionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
