/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getnotificationchannelrequest.h"
#include "getnotificationchannelrequest_p.h"
#include "getnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetNotificationChannelRequest
 *
 * \brief The GetNotificationChannelRequest class encapsulates FMS GetNotificationChannel requests.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::getNotificationChannel
 */

/*!
 * @brief  Constructs a new GetNotificationChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest(const GetNotificationChannelRequest &other)
    : FMSRequest(new GetNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetNotificationChannelRequest object.
 */
GetNotificationChannelRequest::GetNotificationChannelRequest()
    : FMSRequest(new GetNotificationChannelRequestPrivate(FMSRequest::GetNotificationChannelAction, this))
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
 * @brief  Construct an GetNotificationChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetNotificationChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetNotificationChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetNotificationChannelRequestPrivate
 *
 * @brief  Private implementation for GetNotificationChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetNotificationChannelRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public GetNotificationChannelRequest instance.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const FMSRequest::Action action, GetNotificationChannelRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetNotificationChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetNotificationChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetNotificationChannelRequest instance.
 */
GetNotificationChannelRequestPrivate::GetNotificationChannelRequestPrivate(
    const GetNotificationChannelRequestPrivate &other, GetNotificationChannelRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
