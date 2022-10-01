// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putnotificationchannelrequest.h"
#include "putnotificationchannelrequest_p.h"
#include "putnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutNotificationChannelRequest
 * \brief The PutNotificationChannelRequest class provides an interface for Fms PutNotificationChannel requests.
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
 * \sa FmsClient::putNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest(const PutNotificationChannelRequest &other)
    : FmsRequest(new PutNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutNotificationChannelRequest object.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest()
    : FmsRequest(new PutNotificationChannelRequestPrivate(FmsRequest::PutNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool PutNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new PutNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::PutNotificationChannelRequestPrivate
 * \brief The PutNotificationChannelRequestPrivate class provides private implementation for PutNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutNotificationChannelRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const FmsRequest::Action action, PutNotificationChannelRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutNotificationChannelRequest
 * class' copy constructor.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const PutNotificationChannelRequestPrivate &other, PutNotificationChannelRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
