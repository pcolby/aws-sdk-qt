// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroutingprofilenamerequest.h"
#include "updateroutingprofilenamerequest_p.h"
#include "updateroutingprofilenameresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateRoutingProfileNameRequest
 * \brief The UpdateRoutingProfileNameRequest class provides an interface for Connect UpdateRoutingProfileName requests.
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
 * \sa ConnectClient::updateRoutingProfileName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoutingProfileNameRequest::UpdateRoutingProfileNameRequest(const UpdateRoutingProfileNameRequest &other)
    : ConnectRequest(new UpdateRoutingProfileNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoutingProfileNameRequest object.
 */
UpdateRoutingProfileNameRequest::UpdateRoutingProfileNameRequest()
    : ConnectRequest(new UpdateRoutingProfileNameRequestPrivate(ConnectRequest::UpdateRoutingProfileNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoutingProfileNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoutingProfileNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoutingProfileNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoutingProfileNameResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::UpdateRoutingProfileNameRequestPrivate
 * \brief The UpdateRoutingProfileNameRequestPrivate class provides private implementation for UpdateRoutingProfileNameRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateRoutingProfileNameRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
UpdateRoutingProfileNameRequestPrivate::UpdateRoutingProfileNameRequestPrivate(
    const ConnectRequest::Action action, UpdateRoutingProfileNameRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoutingProfileNameRequest
 * class' copy constructor.
 */
UpdateRoutingProfileNameRequestPrivate::UpdateRoutingProfileNameRequestPrivate(
    const UpdateRoutingProfileNameRequestPrivate &other, UpdateRoutingProfileNameRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
