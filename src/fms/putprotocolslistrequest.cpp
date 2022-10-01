// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprotocolslistrequest.h"
#include "putprotocolslistrequest_p.h"
#include "putprotocolslistresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutProtocolsListRequest
 * \brief The PutProtocolsListRequest class provides an interface for Fms PutProtocolsList requests.
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
 * \sa FmsClient::putProtocolsList
 */

/*!
 * Constructs a copy of \a other.
 */
PutProtocolsListRequest::PutProtocolsListRequest(const PutProtocolsListRequest &other)
    : FmsRequest(new PutProtocolsListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutProtocolsListRequest object.
 */
PutProtocolsListRequest::PutProtocolsListRequest()
    : FmsRequest(new PutProtocolsListRequestPrivate(FmsRequest::PutProtocolsListAction, this))
{

}

/*!
 * \reimp
 */
bool PutProtocolsListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutProtocolsListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutProtocolsListRequest::response(QNetworkReply * const reply) const
{
    return new PutProtocolsListResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::PutProtocolsListRequestPrivate
 * \brief The PutProtocolsListRequestPrivate class provides private implementation for PutProtocolsListRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutProtocolsListRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
PutProtocolsListRequestPrivate::PutProtocolsListRequestPrivate(
    const FmsRequest::Action action, PutProtocolsListRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutProtocolsListRequest
 * class' copy constructor.
 */
PutProtocolsListRequestPrivate::PutProtocolsListRequestPrivate(
    const PutProtocolsListRequestPrivate &other, PutProtocolsListRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
