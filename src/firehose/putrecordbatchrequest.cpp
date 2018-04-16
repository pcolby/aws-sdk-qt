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

#include "putrecordbatchrequest.h"
#include "putrecordbatchrequest_p.h"
#include "putrecordbatchresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordBatchRequest
 *
 * \brief The PutRecordBatchRequest class encapsulates Firehose PutRecordBatch requests.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::putRecordBatch
 */

/*!
 * @brief  Constructs a new PutRecordBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRecordBatchRequest::PutRecordBatchRequest(const PutRecordBatchRequest &other)
    : FirehoseRequest(new PutRecordBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutRecordBatchRequest object.
 */
PutRecordBatchRequest::PutRecordBatchRequest()
    : FirehoseRequest(new PutRecordBatchRequestPrivate(FirehoseRequest::PutRecordBatchAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordBatchRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutRecordBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRecordBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordBatchRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordBatchResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutRecordBatchRequestPrivate
 *
 * @brief  Private implementation for PutRecordBatchRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRecordBatchRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public PutRecordBatchRequest instance.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const FirehoseRequest::Action action, PutRecordBatchRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutRecordBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRecordBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRecordBatchRequest instance.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const PutRecordBatchRequestPrivate &other, PutRecordBatchRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
