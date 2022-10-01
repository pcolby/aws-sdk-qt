// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelinesrequest.h"
#include "listpipelinesrequest_p.h"
#include "listpipelinesresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListPipelinesRequest
 * \brief The ListPipelinesRequest class provides an interface for ElasticTranscoder ListPipelines requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listPipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListPipelinesRequest::ListPipelinesRequest(const ListPipelinesRequest &other)
    : ElasticTranscoderRequest(new ListPipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPipelinesRequest object.
 */
ListPipelinesRequest::ListPipelinesRequest()
    : ElasticTranscoderRequest(new ListPipelinesRequestPrivate(ElasticTranscoderRequest::ListPipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ListPipelinesRequestPrivate
 * \brief The ListPipelinesRequestPrivate class provides private implementation for ListPipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListPipelinesRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListPipelinesRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPipelinesRequest
 * class' copy constructor.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ListPipelinesRequestPrivate &other, ListPipelinesRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
