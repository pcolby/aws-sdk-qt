// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectfromservicerequest.h"
#include "disconnectfromservicerequest_p.h"
#include "disconnectfromserviceresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DisconnectFromServiceRequest
 * \brief The DisconnectFromServiceRequest class provides an interface for Mgn DisconnectFromService requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::disconnectFromService
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectFromServiceRequest::DisconnectFromServiceRequest(const DisconnectFromServiceRequest &other)
    : MgnRequest(new DisconnectFromServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectFromServiceRequest object.
 */
DisconnectFromServiceRequest::DisconnectFromServiceRequest()
    : MgnRequest(new DisconnectFromServiceRequestPrivate(MgnRequest::DisconnectFromServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectFromServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectFromServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectFromServiceRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectFromServiceResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DisconnectFromServiceRequestPrivate
 * \brief The DisconnectFromServiceRequestPrivate class provides private implementation for DisconnectFromServiceRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DisconnectFromServiceRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DisconnectFromServiceRequestPrivate::DisconnectFromServiceRequestPrivate(
    const MgnRequest::Action action, DisconnectFromServiceRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectFromServiceRequest
 * class' copy constructor.
 */
DisconnectFromServiceRequestPrivate::DisconnectFromServiceRequestPrivate(
    const DisconnectFromServiceRequestPrivate &other, DisconnectFromServiceRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
