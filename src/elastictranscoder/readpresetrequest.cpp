/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "readpresetrequest.h"
#include "readpresetrequest_p.h"
#include "readpresetresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadPresetRequest
 * \brief The ReadPresetRequest class provides an interface for ElasticTranscoder ReadPreset requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readPreset
 */

/*!
 * Constructs a copy of \a other.
 */
ReadPresetRequest::ReadPresetRequest(const ReadPresetRequest &other)
    : ElasticTranscoderRequest(new ReadPresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReadPresetRequest object.
 */
ReadPresetRequest::ReadPresetRequest()
    : ElasticTranscoderRequest(new ReadPresetRequestPrivate(ElasticTranscoderRequest::ReadPresetAction, this))
{

}

/*!
 * \reimp
 */
bool ReadPresetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReadPresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReadPresetRequest::response(QNetworkReply * const reply) const
{
    return new ReadPresetResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ReadPresetRequestPrivate
 * \brief The ReadPresetRequestPrivate class provides private implementation for ReadPresetRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadPresetRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ReadPresetRequestPrivate::ReadPresetRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadPresetRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReadPresetRequest
 * class' copy constructor.
 */
ReadPresetRequestPrivate::ReadPresetRequestPrivate(
    const ReadPresetRequestPrivate &other, ReadPresetRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
