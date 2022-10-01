// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusecaserequest.h"
#include "deleteusecaserequest_p.h"
#include "deleteusecaseresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteUseCaseRequest
 * \brief The DeleteUseCaseRequest class provides an interface for Connect DeleteUseCase requests.
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
 * \sa ConnectClient::deleteUseCase
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUseCaseRequest::DeleteUseCaseRequest(const DeleteUseCaseRequest &other)
    : ConnectRequest(new DeleteUseCaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUseCaseRequest object.
 */
DeleteUseCaseRequest::DeleteUseCaseRequest()
    : ConnectRequest(new DeleteUseCaseRequestPrivate(ConnectRequest::DeleteUseCaseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUseCaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUseCaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUseCaseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUseCaseResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DeleteUseCaseRequestPrivate
 * \brief The DeleteUseCaseRequestPrivate class provides private implementation for DeleteUseCaseRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteUseCaseRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DeleteUseCaseRequestPrivate::DeleteUseCaseRequestPrivate(
    const ConnectRequest::Action action, DeleteUseCaseRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUseCaseRequest
 * class' copy constructor.
 */
DeleteUseCaseRequestPrivate::DeleteUseCaseRequestPrivate(
    const DeleteUseCaseRequestPrivate &other, DeleteUseCaseRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
