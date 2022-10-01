// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactrequest.h"
#include "updatecontactrequest_p.h"
#include "updatecontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateContactRequest
 * \brief The UpdateContactRequest class provides an interface for Connect UpdateContact requests.
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
 * \sa ConnectClient::updateContact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactRequest::UpdateContactRequest(const UpdateContactRequest &other)
    : ConnectRequest(new UpdateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactRequest object.
 */
UpdateContactRequest::UpdateContactRequest()
    : ConnectRequest(new UpdateContactRequestPrivate(ConnectRequest::UpdateContactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::UpdateContactRequestPrivate
 * \brief The UpdateContactRequestPrivate class provides private implementation for UpdateContactRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateContactRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const ConnectRequest::Action action, UpdateContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactRequest
 * class' copy constructor.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const UpdateContactRequestPrivate &other, UpdateContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
