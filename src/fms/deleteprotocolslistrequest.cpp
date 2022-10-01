/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteprotocolslistrequest.h"
#include "deleteprotocolslistrequest_p.h"
#include "deleteprotocolslistresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteProtocolsListRequest
 * \brief The DeleteProtocolsListRequest class provides an interface for Fms DeleteProtocolsList requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::deleteProtocolsList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProtocolsListRequest::DeleteProtocolsListRequest(const DeleteProtocolsListRequest &other)
    : FmsRequest(new DeleteProtocolsListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProtocolsListRequest object.
 */
DeleteProtocolsListRequest::DeleteProtocolsListRequest()
    : FmsRequest(new DeleteProtocolsListRequestPrivate(FmsRequest::DeleteProtocolsListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProtocolsListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProtocolsListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProtocolsListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProtocolsListResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DeleteProtocolsListRequestPrivate
 * \brief The DeleteProtocolsListRequestPrivate class provides private implementation for DeleteProtocolsListRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteProtocolsListRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DeleteProtocolsListRequestPrivate::DeleteProtocolsListRequestPrivate(
    const FmsRequest::Action action, DeleteProtocolsListRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProtocolsListRequest
 * class' copy constructor.
 */
DeleteProtocolsListRequestPrivate::DeleteProtocolsListRequestPrivate(
    const DeleteProtocolsListRequestPrivate &other, DeleteProtocolsListRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
