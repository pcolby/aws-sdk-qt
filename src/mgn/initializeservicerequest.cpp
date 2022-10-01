// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initializeservicerequest.h"
#include "initializeservicerequest_p.h"
#include "initializeserviceresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::InitializeServiceRequest
 * \brief The InitializeServiceRequest class provides an interface for Mgn InitializeService requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::initializeService
 */

/*!
 * Constructs a copy of \a other.
 */
InitializeServiceRequest::InitializeServiceRequest(const InitializeServiceRequest &other)
    : MgnRequest(new InitializeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitializeServiceRequest object.
 */
InitializeServiceRequest::InitializeServiceRequest()
    : MgnRequest(new InitializeServiceRequestPrivate(MgnRequest::InitializeServiceAction, this))
{

}

/*!
 * \reimp
 */
bool InitializeServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitializeServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitializeServiceRequest::response(QNetworkReply * const reply) const
{
    return new InitializeServiceResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::InitializeServiceRequestPrivate
 * \brief The InitializeServiceRequestPrivate class provides private implementation for InitializeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a InitializeServiceRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
InitializeServiceRequestPrivate::InitializeServiceRequestPrivate(
    const MgnRequest::Action action, InitializeServiceRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitializeServiceRequest
 * class' copy constructor.
 */
InitializeServiceRequestPrivate::InitializeServiceRequestPrivate(
    const InitializeServiceRequestPrivate &other, InitializeServiceRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
