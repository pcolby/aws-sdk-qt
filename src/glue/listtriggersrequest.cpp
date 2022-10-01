// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtriggersrequest.h"
#include "listtriggersrequest_p.h"
#include "listtriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListTriggersRequest
 * \brief The ListTriggersRequest class provides an interface for Glue ListTriggers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listTriggers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTriggersRequest::ListTriggersRequest(const ListTriggersRequest &other)
    : GlueRequest(new ListTriggersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTriggersRequest object.
 */
ListTriggersRequest::ListTriggersRequest()
    : GlueRequest(new ListTriggersRequestPrivate(GlueRequest::ListTriggersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTriggersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTriggersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTriggersRequest::response(QNetworkReply * const reply) const
{
    return new ListTriggersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListTriggersRequestPrivate
 * \brief The ListTriggersRequestPrivate class provides private implementation for ListTriggersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListTriggersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListTriggersRequestPrivate::ListTriggersRequestPrivate(
    const GlueRequest::Action action, ListTriggersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTriggersRequest
 * class' copy constructor.
 */
ListTriggersRequestPrivate::ListTriggersRequestPrivate(
    const ListTriggersRequestPrivate &other, ListTriggersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
