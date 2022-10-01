// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatequickconnectnamerequest.h"
#include "updatequickconnectnamerequest_p.h"
#include "updatequickconnectnameresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateQuickConnectNameRequest
 * \brief The UpdateQuickConnectNameRequest class provides an interface for Connect UpdateQuickConnectName requests.
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
 * \sa ConnectClient::updateQuickConnectName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQuickConnectNameRequest::UpdateQuickConnectNameRequest(const UpdateQuickConnectNameRequest &other)
    : ConnectRequest(new UpdateQuickConnectNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQuickConnectNameRequest object.
 */
UpdateQuickConnectNameRequest::UpdateQuickConnectNameRequest()
    : ConnectRequest(new UpdateQuickConnectNameRequestPrivate(ConnectRequest::UpdateQuickConnectNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQuickConnectNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateQuickConnectNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQuickConnectNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQuickConnectNameResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::UpdateQuickConnectNameRequestPrivate
 * \brief The UpdateQuickConnectNameRequestPrivate class provides private implementation for UpdateQuickConnectNameRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateQuickConnectNameRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
UpdateQuickConnectNameRequestPrivate::UpdateQuickConnectNameRequestPrivate(
    const ConnectRequest::Action action, UpdateQuickConnectNameRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQuickConnectNameRequest
 * class' copy constructor.
 */
UpdateQuickConnectNameRequestPrivate::UpdateQuickConnectNameRequestPrivate(
    const UpdateQuickConnectNameRequestPrivate &other, UpdateQuickConnectNameRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
