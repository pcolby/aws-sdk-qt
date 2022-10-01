// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initializeservicerequest.h"
#include "initializeservicerequest_p.h"
#include "initializeserviceresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::InitializeServiceRequest
 * \brief The InitializeServiceRequest class provides an interface for Drs InitializeService requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::initializeService
 */

/*!
 * Constructs a copy of \a other.
 */
InitializeServiceRequest::InitializeServiceRequest(const InitializeServiceRequest &other)
    : DrsRequest(new InitializeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitializeServiceRequest object.
 */
InitializeServiceRequest::InitializeServiceRequest()
    : DrsRequest(new InitializeServiceRequestPrivate(DrsRequest::InitializeServiceAction, this))
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
 * \class QtAws::Drs::InitializeServiceRequestPrivate
 * \brief The InitializeServiceRequestPrivate class provides private implementation for InitializeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a InitializeServiceRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
InitializeServiceRequestPrivate::InitializeServiceRequestPrivate(
    const DrsRequest::Action action, InitializeServiceRequest * const q)
    : DrsRequestPrivate(action, q)
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
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
