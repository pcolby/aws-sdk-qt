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

#include "deletepresetrequest.h"
#include "deletepresetrequest_p.h"
#include "deletepresetresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::DeletePresetRequest
 * \brief The DeletePresetRequest class provides an interface for ElasticTranscoder DeletePreset requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::deletePreset
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePresetRequest::DeletePresetRequest(const DeletePresetRequest &other)
    : ElasticTranscoderRequest(new DeletePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePresetRequest object.
 */
DeletePresetRequest::DeletePresetRequest()
    : ElasticTranscoderRequest(new DeletePresetRequestPrivate(ElasticTranscoderRequest::DeletePresetAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePresetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePresetRequest::response(QNetworkReply * const reply) const
{
    return new DeletePresetResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::DeletePresetRequestPrivate
 * \brief The DeletePresetRequestPrivate class provides private implementation for DeletePresetRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 *
 * Constructs a DeletePresetRequestPrivate object for ElasticTranscoder \a action with,
 * public implementation \a q.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const ElasticTranscoderRequest::Action action, DeletePresetRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePresetRequest
 * class' copy constructor.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const DeletePresetRequestPrivate &other, DeletePresetRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
