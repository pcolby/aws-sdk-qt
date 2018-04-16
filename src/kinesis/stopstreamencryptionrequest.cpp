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

#include "stopstreamencryptionrequest.h"
#include "stopstreamencryptionrequest_p.h"
#include "stopstreamencryptionresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StopStreamEncryptionRequest
 *
 * \brief The StopStreamEncryptionRequest class provides an interface for Kinesis StopStreamEncryption requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::stopStreamEncryption
 */

/*!
 * @brief  Constructs a new StopStreamEncryptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopStreamEncryptionRequest::StopStreamEncryptionRequest(const StopStreamEncryptionRequest &other)
    : KinesisRequest(new StopStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopStreamEncryptionRequest object.
 */
StopStreamEncryptionRequest::StopStreamEncryptionRequest()
    : KinesisRequest(new StopStreamEncryptionRequestPrivate(KinesisRequest::StopStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StopStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopStreamEncryptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopStreamEncryptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * StopStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StopStreamEncryptionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopStreamEncryptionRequestPrivate
 *
 * @brief  Private implementation for StopStreamEncryptionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopStreamEncryptionRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public StopStreamEncryptionRequest instance.
 */
StopStreamEncryptionRequestPrivate::StopStreamEncryptionRequestPrivate(
    const KinesisRequest::Action action, StopStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopStreamEncryptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopStreamEncryptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopStreamEncryptionRequest instance.
 */
StopStreamEncryptionRequestPrivate::StopStreamEncryptionRequestPrivate(
    const StopStreamEncryptionRequestPrivate &other, StopStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
