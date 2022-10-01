// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomentitytypesrequest.h"
#include "listcustomentitytypesrequest_p.h"
#include "listcustomentitytypesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCustomEntityTypesRequest
 * \brief The ListCustomEntityTypesRequest class provides an interface for Glue ListCustomEntityTypes requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCustomEntityTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListCustomEntityTypesRequest::ListCustomEntityTypesRequest(const ListCustomEntityTypesRequest &other)
    : GlueRequest(new ListCustomEntityTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCustomEntityTypesRequest object.
 */
ListCustomEntityTypesRequest::ListCustomEntityTypesRequest()
    : GlueRequest(new ListCustomEntityTypesRequestPrivate(GlueRequest::ListCustomEntityTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomEntityTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCustomEntityTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomEntityTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomEntityTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListCustomEntityTypesRequestPrivate
 * \brief The ListCustomEntityTypesRequestPrivate class provides private implementation for ListCustomEntityTypesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCustomEntityTypesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListCustomEntityTypesRequestPrivate::ListCustomEntityTypesRequestPrivate(
    const GlueRequest::Action action, ListCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCustomEntityTypesRequest
 * class' copy constructor.
 */
ListCustomEntityTypesRequestPrivate::ListCustomEntityTypesRequestPrivate(
    const ListCustomEntityTypesRequestPrivate &other, ListCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
