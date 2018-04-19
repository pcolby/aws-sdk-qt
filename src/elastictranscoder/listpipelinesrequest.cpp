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
 *
 * Constructs a ListPipelinesRequestPrivate object for ElasticTranscoder \a action with,
 * public implementation \a q.
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
