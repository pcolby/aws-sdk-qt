// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsbystatusrequest.h"
#include "listjobsbystatusrequest_p.h"
#include "listjobsbystatusresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByStatusRequest
 * \brief The ListJobsByStatusRequest class provides an interface for ElasticTranscoder ListJobsByStatus requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listJobsByStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobsByStatusRequest::ListJobsByStatusRequest(const ListJobsByStatusRequest &other)
    : ElasticTranscoderRequest(new ListJobsByStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobsByStatusRequest object.
 */
ListJobsByStatusRequest::ListJobsByStatusRequest()
    : ElasticTranscoderRequest(new ListJobsByStatusRequestPrivate(ElasticTranscoderRequest::ListJobsByStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsByStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobsByStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsByStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsByStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByStatusRequestPrivate
 * \brief The ListJobsByStatusRequestPrivate class provides private implementation for ListJobsByStatusRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListJobsByStatusRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ListJobsByStatusRequestPrivate::ListJobsByStatusRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListJobsByStatusRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobsByStatusRequest
 * class' copy constructor.
 */
ListJobsByStatusRequestPrivate::ListJobsByStatusRequestPrivate(
    const ListJobsByStatusRequestPrivate &other, ListJobsByStatusRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
