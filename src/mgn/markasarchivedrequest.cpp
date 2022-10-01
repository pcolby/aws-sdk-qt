// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "markasarchivedrequest.h"
#include "markasarchivedrequest_p.h"
#include "markasarchivedresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::MarkAsArchivedRequest
 * \brief The MarkAsArchivedRequest class provides an interface for Mgn MarkAsArchived requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::markAsArchived
 */

/*!
 * Constructs a copy of \a other.
 */
MarkAsArchivedRequest::MarkAsArchivedRequest(const MarkAsArchivedRequest &other)
    : MgnRequest(new MarkAsArchivedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MarkAsArchivedRequest object.
 */
MarkAsArchivedRequest::MarkAsArchivedRequest()
    : MgnRequest(new MarkAsArchivedRequestPrivate(MgnRequest::MarkAsArchivedAction, this))
{

}

/*!
 * \reimp
 */
bool MarkAsArchivedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MarkAsArchivedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MarkAsArchivedRequest::response(QNetworkReply * const reply) const
{
    return new MarkAsArchivedResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::MarkAsArchivedRequestPrivate
 * \brief The MarkAsArchivedRequestPrivate class provides private implementation for MarkAsArchivedRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a MarkAsArchivedRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
MarkAsArchivedRequestPrivate::MarkAsArchivedRequestPrivate(
    const MgnRequest::Action action, MarkAsArchivedRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MarkAsArchivedRequest
 * class' copy constructor.
 */
MarkAsArchivedRequestPrivate::MarkAsArchivedRequestPrivate(
    const MarkAsArchivedRequestPrivate &other, MarkAsArchivedRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
