// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevcenterclientrequest.h"
#include "deletevcenterclientrequest_p.h"
#include "deletevcenterclientresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteVcenterClientRequest
 * \brief The DeleteVcenterClientRequest class provides an interface for Mgn DeleteVcenterClient requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteVcenterClient
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVcenterClientRequest::DeleteVcenterClientRequest(const DeleteVcenterClientRequest &other)
    : MgnRequest(new DeleteVcenterClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVcenterClientRequest object.
 */
DeleteVcenterClientRequest::DeleteVcenterClientRequest()
    : MgnRequest(new DeleteVcenterClientRequestPrivate(MgnRequest::DeleteVcenterClientAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVcenterClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVcenterClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVcenterClientRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVcenterClientResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DeleteVcenterClientRequestPrivate
 * \brief The DeleteVcenterClientRequestPrivate class provides private implementation for DeleteVcenterClientRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteVcenterClientRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DeleteVcenterClientRequestPrivate::DeleteVcenterClientRequestPrivate(
    const MgnRequest::Action action, DeleteVcenterClientRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVcenterClientRequest
 * class' copy constructor.
 */
DeleteVcenterClientRequestPrivate::DeleteVcenterClientRequestPrivate(
    const DeleteVcenterClientRequestPrivate &other, DeleteVcenterClientRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
