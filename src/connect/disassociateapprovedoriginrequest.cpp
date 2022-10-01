// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateapprovedoriginrequest.h"
#include "disassociateapprovedoriginrequest_p.h"
#include "disassociateapprovedoriginresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DisassociateApprovedOriginRequest
 * \brief The DisassociateApprovedOriginRequest class provides an interface for Connect DisassociateApprovedOrigin requests.
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
 * \sa ConnectClient::disassociateApprovedOrigin
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateApprovedOriginRequest::DisassociateApprovedOriginRequest(const DisassociateApprovedOriginRequest &other)
    : ConnectRequest(new DisassociateApprovedOriginRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateApprovedOriginRequest object.
 */
DisassociateApprovedOriginRequest::DisassociateApprovedOriginRequest()
    : ConnectRequest(new DisassociateApprovedOriginRequestPrivate(ConnectRequest::DisassociateApprovedOriginAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateApprovedOriginRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateApprovedOriginResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateApprovedOriginRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateApprovedOriginResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DisassociateApprovedOriginRequestPrivate
 * \brief The DisassociateApprovedOriginRequestPrivate class provides private implementation for DisassociateApprovedOriginRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DisassociateApprovedOriginRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DisassociateApprovedOriginRequestPrivate::DisassociateApprovedOriginRequestPrivate(
    const ConnectRequest::Action action, DisassociateApprovedOriginRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateApprovedOriginRequest
 * class' copy constructor.
 */
DisassociateApprovedOriginRequestPrivate::DisassociateApprovedOriginRequestPrivate(
    const DisassociateApprovedOriginRequestPrivate &other, DisassociateApprovedOriginRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
