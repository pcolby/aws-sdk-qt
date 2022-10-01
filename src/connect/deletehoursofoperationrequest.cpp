// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehoursofoperationrequest.h"
#include "deletehoursofoperationrequest_p.h"
#include "deletehoursofoperationresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteHoursOfOperationRequest
 * \brief The DeleteHoursOfOperationRequest class provides an interface for Connect DeleteHoursOfOperation requests.
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
 * \sa ConnectClient::deleteHoursOfOperation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHoursOfOperationRequest::DeleteHoursOfOperationRequest(const DeleteHoursOfOperationRequest &other)
    : ConnectRequest(new DeleteHoursOfOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHoursOfOperationRequest object.
 */
DeleteHoursOfOperationRequest::DeleteHoursOfOperationRequest()
    : ConnectRequest(new DeleteHoursOfOperationRequestPrivate(ConnectRequest::DeleteHoursOfOperationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHoursOfOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHoursOfOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHoursOfOperationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHoursOfOperationResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DeleteHoursOfOperationRequestPrivate
 * \brief The DeleteHoursOfOperationRequestPrivate class provides private implementation for DeleteHoursOfOperationRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteHoursOfOperationRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DeleteHoursOfOperationRequestPrivate::DeleteHoursOfOperationRequestPrivate(
    const ConnectRequest::Action action, DeleteHoursOfOperationRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHoursOfOperationRequest
 * class' copy constructor.
 */
DeleteHoursOfOperationRequestPrivate::DeleteHoursOfOperationRequestPrivate(
    const DeleteHoursOfOperationRequestPrivate &other, DeleteHoursOfOperationRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
