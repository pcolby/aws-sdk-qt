// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregistriesrequest.h"
#include "listregistriesrequest_p.h"
#include "listregistriesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListRegistriesRequest
 * \brief The ListRegistriesRequest class provides an interface for Glue ListRegistries requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listRegistries
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegistriesRequest::ListRegistriesRequest(const ListRegistriesRequest &other)
    : GlueRequest(new ListRegistriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegistriesRequest object.
 */
ListRegistriesRequest::ListRegistriesRequest()
    : GlueRequest(new ListRegistriesRequestPrivate(GlueRequest::ListRegistriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegistriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegistriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegistriesRequest::response(QNetworkReply * const reply) const
{
    return new ListRegistriesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListRegistriesRequestPrivate
 * \brief The ListRegistriesRequestPrivate class provides private implementation for ListRegistriesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListRegistriesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const GlueRequest::Action action, ListRegistriesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegistriesRequest
 * class' copy constructor.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const ListRegistriesRequestPrivate &other, ListRegistriesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
