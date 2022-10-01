// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
