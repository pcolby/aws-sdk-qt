// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listblueprintsrequest.h"
#include "listblueprintsrequest_p.h"
#include "listblueprintsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListBlueprintsRequest
 * \brief The ListBlueprintsRequest class provides an interface for Glue ListBlueprints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listBlueprints
 */

/*!
 * Constructs a copy of \a other.
 */
ListBlueprintsRequest::ListBlueprintsRequest(const ListBlueprintsRequest &other)
    : GlueRequest(new ListBlueprintsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBlueprintsRequest object.
 */
ListBlueprintsRequest::ListBlueprintsRequest()
    : GlueRequest(new ListBlueprintsRequestPrivate(GlueRequest::ListBlueprintsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBlueprintsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBlueprintsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBlueprintsRequest::response(QNetworkReply * const reply) const
{
    return new ListBlueprintsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListBlueprintsRequestPrivate
 * \brief The ListBlueprintsRequestPrivate class provides private implementation for ListBlueprintsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListBlueprintsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListBlueprintsRequestPrivate::ListBlueprintsRequestPrivate(
    const GlueRequest::Action action, ListBlueprintsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBlueprintsRequest
 * class' copy constructor.
 */
ListBlueprintsRequestPrivate::ListBlueprintsRequestPrivate(
    const ListBlueprintsRequestPrivate &other, ListBlueprintsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
