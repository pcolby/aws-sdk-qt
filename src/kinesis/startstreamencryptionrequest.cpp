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

#include "startstreamencryptionrequest.h"
#include "startstreamencryptionrequest_p.h"
#include "startstreamencryptionresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::StartStreamEncryptionRequest
 *
 * \brief The StartStreamEncryptionRequest class provides an interface for Kinesis StartStreamEncryption requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::startStreamEncryption
 */

/*!
 * @brief  Constructs a new StartStreamEncryptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartStreamEncryptionRequest::StartStreamEncryptionRequest(const StartStreamEncryptionRequest &other)
    : KinesisRequest(new StartStreamEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartStreamEncryptionRequest object.
 */
StartStreamEncryptionRequest::StartStreamEncryptionRequest()
    : KinesisRequest(new StartStreamEncryptionRequestPrivate(KinesisRequest::StartStreamEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartStreamEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartStreamEncryptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartStreamEncryptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStreamEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamEncryptionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartStreamEncryptionRequestPrivate
 *
 * @brief  Private implementation for StartStreamEncryptionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartStreamEncryptionRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public StartStreamEncryptionRequest instance.
 */
StartStreamEncryptionRequestPrivate::StartStreamEncryptionRequestPrivate(
    const KinesisRequest::Action action, StartStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartStreamEncryptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartStreamEncryptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartStreamEncryptionRequest instance.
 */
StartStreamEncryptionRequestPrivate::StartStreamEncryptionRequestPrivate(
    const StartStreamEncryptionRequestPrivate &other, StartStreamEncryptionRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
