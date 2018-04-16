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

#include "describevoicesrequest.h"
#include "describevoicesrequest_p.h"
#include "describevoicesresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DescribeVoicesRequest
 *
 * \brief The DescribeVoicesRequest class encapsulates Polly DescribeVoices requests.
 *
 * \ingroup Polly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::describeVoices
 */

/*!
 * @brief  Constructs a new DescribeVoicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVoicesRequest::DescribeVoicesRequest(const DescribeVoicesRequest &other)
    : PollyRequest(new DescribeVoicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeVoicesRequest object.
 */
DescribeVoicesRequest::DescribeVoicesRequest()
    : PollyRequest(new DescribeVoicesRequestPrivate(PollyRequest::DescribeVoicesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVoicesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeVoicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVoicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVoicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVoicesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeVoicesRequestPrivate
 *
 * @brief  Private implementation for DescribeVoicesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeVoicesRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public DescribeVoicesRequest instance.
 */
DescribeVoicesRequestPrivate::DescribeVoicesRequestPrivate(
    const PollyRequest::Action action, DescribeVoicesRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeVoicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVoicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVoicesRequest instance.
 */
DescribeVoicesRequestPrivate::DescribeVoicesRequestPrivate(
    const DescribeVoicesRequestPrivate &other, DescribeVoicesRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
