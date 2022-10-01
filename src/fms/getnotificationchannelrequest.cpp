// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnotificationchannelrequest.h"
#include "getnotificationchannelrequest_p.h"
#include "getnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetNotificationChannelRequest
 * \brief The GetNotificationChannelRequest class provides an interface for Fms GetNotificationChannel requests.
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
 * \sa FmsClient::getNotificationChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest(const GetNotificationChannelRequest &other)
    : FmsRequest(new GetNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNotificationChannelRequest object.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest()
    : FmsRequest(new GetNotificationChannelRequestPrivate(FmsRequest::GetNotificationChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetNotificationChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNotificationChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetNotificationChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetNotificationChannelRequestPrivate
 * \brief The GetNotificationChannelRequestPrivate class provides private implementation for GetNotificationChannelRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetNotificationChannelRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const FmsRequest::Action action, GetNotificationChannelRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNotificationChannelRequest
 * class' copy constructor.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const GetNotificationChannelRequestPrivate &other, GetNotificationChannelRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
