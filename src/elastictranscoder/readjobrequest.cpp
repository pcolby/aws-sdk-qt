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

#include "readjobrequest.h"
#include "readjobrequest_p.h"
#include "readjobresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadJobRequest
 *
 * \brief The ReadJobRequest class provides an interface for ElasticTranscoder ReadJob requests.
 *
 * \ingroup ElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readJob
 */

/*!
 * @brief  Constructs a new ReadJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReadJobRequest::ReadJobRequest(const ReadJobRequest &other)
    : ElasticTranscoderRequest(new ReadJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ReadJobRequest object.
 */
ReadJobRequest::ReadJobRequest()
    : ElasticTranscoderRequest(new ReadJobRequestPrivate(ElasticTranscoderRequest::ReadJobAction, this))
{

}

/*!
 * \reimp
 */
bool ReadJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ReadJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReadJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
QtAws::Core::AwsAbstractResponse * ReadJobRequest::response(QNetworkReply * const reply) const
{
    return new ReadJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ReadJobRequestPrivate
 *
 * @brief  Private implementation for ReadJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ReadJobRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ReadJobRequest instance.
 */
ReadJobRequestPrivate::ReadJobRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadJobRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ReadJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReadJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReadJobRequest instance.
 */
ReadJobRequestPrivate::ReadJobRequestPrivate(
    const ReadJobRequestPrivate &other, ReadJobRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
