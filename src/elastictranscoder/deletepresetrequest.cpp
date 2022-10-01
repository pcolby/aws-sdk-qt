// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a DeletePresetRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
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
