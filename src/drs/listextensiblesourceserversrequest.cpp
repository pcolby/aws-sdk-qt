// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listextensiblesourceserversrequest.h"
#include "listextensiblesourceserversrequest_p.h"
#include "listextensiblesourceserversresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersRequest
 * \brief The ListExtensibleSourceServersRequest class provides an interface for Drs ListExtensibleSourceServers requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listExtensibleSourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListExtensibleSourceServersRequest::ListExtensibleSourceServersRequest(const ListExtensibleSourceServersRequest &other)
    : DrsRequest(new ListExtensibleSourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExtensibleSourceServersRequest object.
 */
ListExtensibleSourceServersRequest::ListExtensibleSourceServersRequest()
    : DrsRequest(new ListExtensibleSourceServersRequestPrivate(DrsRequest::ListExtensibleSourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListExtensibleSourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExtensibleSourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExtensibleSourceServersRequest::response(QNetworkReply * const reply) const
{
    return new ListExtensibleSourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersRequestPrivate
 * \brief The ListExtensibleSourceServersRequestPrivate class provides private implementation for ListExtensibleSourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListExtensibleSourceServersRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
ListExtensibleSourceServersRequestPrivate::ListExtensibleSourceServersRequestPrivate(
    const DrsRequest::Action action, ListExtensibleSourceServersRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExtensibleSourceServersRequest
 * class' copy constructor.
 */
ListExtensibleSourceServersRequestPrivate::ListExtensibleSourceServersRequestPrivate(
    const ListExtensibleSourceServersRequestPrivate &other, ListExtensibleSourceServersRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
