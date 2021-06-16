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

#include "readjobrequest.h"
#include "readjobrequest_p.h"
#include "readjobresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadJobRequest
 * \brief The ReadJobRequest class provides an interface for ElasticTranscoder ReadJob requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readJob
 */

/*!
 * Constructs a copy of \a other.
 */
ReadJobRequest::ReadJobRequest(const ReadJobRequest &other)
    : ElasticTranscoderRequest(new ReadJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReadJobRequest object.
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
 * Returns a ReadJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReadJobRequest::response(QNetworkReply * const reply) const
{
    return new ReadJobResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ReadJobRequestPrivate
 * \brief The ReadJobRequestPrivate class provides private implementation for ReadJobRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadJobRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ReadJobRequestPrivate::ReadJobRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadJobRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReadJobRequest
 * class' copy constructor.
 */
ReadJobRequestPrivate::ReadJobRequestPrivate(
    const ReadJobRequestPrivate &other, ReadJobRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
