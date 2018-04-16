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

#include "listtopicsrequest.h"
#include "listtopicsrequest_p.h"
#include "listtopicsresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::ListTopicsRequest
 *
 * \brief The ListTopicsRequest class encapsulates SNS ListTopics requests.
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
 * \sa SNSClient::listTopics
 */

/*!
 * @brief  Constructs a new ListTopicsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTopicsRequest::ListTopicsRequest(const ListTopicsRequest &other)
    : SNSRequest(new ListTopicsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTopicsRequest object.
 */
ListTopicsRequest::ListTopicsRequest()
    : SNSRequest(new ListTopicsRequestPrivate(SNSRequest::ListTopicsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTopicsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTopicsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTopicsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTopicsRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTopicsRequestPrivate
 *
 * @brief  Private implementation for ListTopicsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTopicsRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListTopicsRequest instance.
 */
ListTopicsRequestPrivate::ListTopicsRequestPrivate(
    const SNSRequest::Action action, ListTopicsRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTopicsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTopicsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTopicsRequest instance.
 */
ListTopicsRequestPrivate::ListTopicsRequestPrivate(
    const ListTopicsRequestPrivate &other, ListTopicsRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
