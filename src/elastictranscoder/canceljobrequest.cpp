// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CancelJobRequest
 * \brief The CancelJobRequest class provides an interface for ElasticTranscoder CancelJob requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::cancelJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : ElasticTranscoderRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : ElasticTranscoderRequest(new CancelJobRequestPrivate(ElasticTranscoderRequest::CancelJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::CancelJobRequestPrivate
 * \brief The CancelJobRequestPrivate class provides private implementation for CancelJobRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CancelJobRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const ElasticTranscoderRequest::Action action, CancelJobRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
