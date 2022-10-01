// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
