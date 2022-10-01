// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmcustomeragreementrequest.h"
#include "confirmcustomeragreementrequest_p.h"
#include "confirmcustomeragreementresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmCustomerAgreementRequest
 * \brief The ConfirmCustomerAgreementRequest class provides an interface for DirectConnect ConfirmCustomerAgreement requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::confirmCustomerAgreement
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmCustomerAgreementRequest::ConfirmCustomerAgreementRequest(const ConfirmCustomerAgreementRequest &other)
    : DirectConnectRequest(new ConfirmCustomerAgreementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmCustomerAgreementRequest object.
 */
ConfirmCustomerAgreementRequest::ConfirmCustomerAgreementRequest()
    : DirectConnectRequest(new ConfirmCustomerAgreementRequestPrivate(DirectConnectRequest::ConfirmCustomerAgreementAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmCustomerAgreementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmCustomerAgreementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmCustomerAgreementRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmCustomerAgreementResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ConfirmCustomerAgreementRequestPrivate
 * \brief The ConfirmCustomerAgreementRequestPrivate class provides private implementation for ConfirmCustomerAgreementRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmCustomerAgreementRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ConfirmCustomerAgreementRequestPrivate::ConfirmCustomerAgreementRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmCustomerAgreementRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmCustomerAgreementRequest
 * class' copy constructor.
 */
ConfirmCustomerAgreementRequestPrivate::ConfirmCustomerAgreementRequestPrivate(
    const ConfirmCustomerAgreementRequestPrivate &other, ConfirmCustomerAgreementRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
