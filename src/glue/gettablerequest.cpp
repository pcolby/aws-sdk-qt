// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettablerequest.h"
#include "gettablerequest_p.h"
#include "gettableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableRequest
 * \brief The GetTableRequest class provides an interface for Glue GetTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTable
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableRequest::GetTableRequest(const GetTableRequest &other)
    : GlueRequest(new GetTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableRequest object.
 */
GetTableRequest::GetTableRequest()
    : GlueRequest(new GetTableRequestPrivate(GlueRequest::GetTableAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableRequest::response(QNetworkReply * const reply) const
{
    return new GetTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableRequestPrivate
 * \brief The GetTableRequestPrivate class provides private implementation for GetTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GlueRequest::Action action, GetTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableRequest
 * class' copy constructor.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GetTableRequestPrivate &other, GetTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
