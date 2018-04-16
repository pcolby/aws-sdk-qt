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

#include "createstreamrequest.h"
#include "createstreamrequest_p.h"
#include "createstreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::CreateStreamRequest
 *
 * \brief The CreateStreamRequest class provides an interface for Kinesis CreateStream requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::createStream
 */

/*!
 * @brief  Constructs a new CreateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamRequest::CreateStreamRequest(const CreateStreamRequest &other)
    : KinesisRequest(new CreateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateStreamRequest object.
 */
CreateStreamRequest::CreateStreamRequest()
    : KinesisRequest(new CreateStreamRequestPrivate(KinesisRequest::CreateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateStreamRequestPrivate
 *
 * @brief  Private implementation for CreateStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public CreateStreamRequest instance.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const KinesisRequest::Action action, CreateStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamRequest instance.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const CreateStreamRequestPrivate &other, CreateStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
