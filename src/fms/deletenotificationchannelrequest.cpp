// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotificationchannelrequest.h"
#include "deletenotificationchannelrequest_p.h"
#include "deletenotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteNotificationChannelRequest
 * \brief The DeleteNotificationChannelRequest class provides an interface for Fms DeleteNotificationChannel requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::deleteNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNotificationChannelRequest::DeleteNotificationChannelRequest(const DeleteNotificationChannelRequest &other)
    : FmsRequest(new DeleteNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNotificationChannelRequest object.
 */
DeleteNotificationChannelRequest::DeleteNotificationChannelRequest()
    : FmsRequest(new DeleteNotificationChannelRequestPrivate(FmsRequest::DeleteNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DeleteNotificationChannelRequestPrivate
 * \brief The DeleteNotificationChannelRequestPrivate class provides private implementation for DeleteNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteNotificationChannelRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DeleteNotificationChannelRequestPrivate::DeleteNotificationChannelRequestPrivate(
    const FmsRequest::Action action, DeleteNotificationChannelRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotificationChannelRequest
 * class' copy constructor.
 */
DeleteNotificationChannelRequestPrivate::DeleteNotificationChannelRequestPrivate(
    const DeleteNotificationChannelRequestPrivate &other, DeleteNotificationChannelRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
