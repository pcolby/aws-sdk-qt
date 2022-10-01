// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstancerequest.h"
#include "deleteinstancerequest_p.h"
#include "deleteinstanceresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteInstanceRequest
 * \brief The DeleteInstanceRequest class provides an interface for Connect DeleteInstance requests.
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
 * \sa ConnectClient::deleteInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInstanceRequest::DeleteInstanceRequest(const DeleteInstanceRequest &other)
    : ConnectRequest(new DeleteInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInstanceRequest object.
 */
DeleteInstanceRequest::DeleteInstanceRequest()
    : ConnectRequest(new DeleteInstanceRequestPrivate(ConnectRequest::DeleteInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DeleteInstanceRequestPrivate
 * \brief The DeleteInstanceRequestPrivate class provides private implementation for DeleteInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteInstanceRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DeleteInstanceRequestPrivate::DeleteInstanceRequestPrivate(
    const ConnectRequest::Action action, DeleteInstanceRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceRequest
 * class' copy constructor.
 */
DeleteInstanceRequestPrivate::DeleteInstanceRequestPrivate(
    const DeleteInstanceRequestPrivate &other, DeleteInstanceRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
