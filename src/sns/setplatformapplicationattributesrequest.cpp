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

#include "setplatformapplicationattributesrequest.h"
#include "setplatformapplicationattributesrequest_p.h"
#include "setplatformapplicationattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SetPlatformApplicationAttributesRequest
 *
 * \brief The SetPlatformApplicationAttributesRequest class encapsulates SNS SetPlatformApplicationAttributes requests.
 *
 * \ingroup SNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SNSClient::setPlatformApplicationAttributes
 */

/*!
 * @brief  Constructs a new SetPlatformApplicationAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetPlatformApplicationAttributesRequest::SetPlatformApplicationAttributesRequest(const SetPlatformApplicationAttributesRequest &other)
    : SNSRequest(new SetPlatformApplicationAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SetPlatformApplicationAttributesRequest object.
 */
SetPlatformApplicationAttributesRequest::SetPlatformApplicationAttributesRequest()
    : SNSRequest(new SetPlatformApplicationAttributesRequestPrivate(SNSRequest::SetPlatformApplicationAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool SetPlatformApplicationAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SetPlatformApplicationAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetPlatformApplicationAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * SetPlatformApplicationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetPlatformApplicationAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SetPlatformApplicationAttributesRequestPrivate
 *
 * @brief  Private implementation for SetPlatformApplicationAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetPlatformApplicationAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetPlatformApplicationAttributesRequest instance.
 */
SetPlatformApplicationAttributesRequestPrivate::SetPlatformApplicationAttributesRequestPrivate(
    const SNSRequest::Action action, SetPlatformApplicationAttributesRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SetPlatformApplicationAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetPlatformApplicationAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetPlatformApplicationAttributesRequest instance.
 */
SetPlatformApplicationAttributesRequestPrivate::SetPlatformApplicationAttributesRequestPrivate(
    const SetPlatformApplicationAttributesRequestPrivate &other, SetPlatformApplicationAttributesRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
