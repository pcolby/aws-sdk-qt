// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatesecuritykeyrequest.h"
#include "disassociatesecuritykeyrequest_p.h"
#include "disassociatesecuritykeyresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DisassociateSecurityKeyRequest
 * \brief The DisassociateSecurityKeyRequest class provides an interface for Connect DisassociateSecurityKey requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::disassociateSecurityKey
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateSecurityKeyRequest::DisassociateSecurityKeyRequest(const DisassociateSecurityKeyRequest &other)
    : ConnectRequest(new DisassociateSecurityKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateSecurityKeyRequest object.
 */
DisassociateSecurityKeyRequest::DisassociateSecurityKeyRequest()
    : ConnectRequest(new DisassociateSecurityKeyRequestPrivate(ConnectRequest::DisassociateSecurityKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateSecurityKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateSecurityKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateSecurityKeyRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSecurityKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DisassociateSecurityKeyRequestPrivate
 * \brief The DisassociateSecurityKeyRequestPrivate class provides private implementation for DisassociateSecurityKeyRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DisassociateSecurityKeyRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DisassociateSecurityKeyRequestPrivate::DisassociateSecurityKeyRequestPrivate(
    const ConnectRequest::Action action, DisassociateSecurityKeyRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSecurityKeyRequest
 * class' copy constructor.
 */
DisassociateSecurityKeyRequestPrivate::DisassociateSecurityKeyRequestPrivate(
    const DisassociateSecurityKeyRequestPrivate &other, DisassociateSecurityKeyRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
