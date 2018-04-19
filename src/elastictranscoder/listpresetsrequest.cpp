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

#include "listpresetsrequest.h"
#include "listpresetsrequest_p.h"
#include "listpresetsresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListPresetsRequest
 * \brief The ListPresetsRequest class provides an interface for ElasticTranscoder ListPresets requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listPresets
 */

/*!
 * Constructs a copy of \a other.
 */
ListPresetsRequest::ListPresetsRequest(const ListPresetsRequest &other)
    : ElasticTranscoderRequest(new ListPresetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPresetsRequest object.
 */
ListPresetsRequest::ListPresetsRequest()
    : ElasticTranscoderRequest(new ListPresetsRequestPrivate(ElasticTranscoderRequest::ListPresetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPresetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPresetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPresetsRequest::response(QNetworkReply * const reply) const
{
    return new ListPresetsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ListPresetsRequestPrivate
 * \brief The ListPresetsRequestPrivate class provides private implementation for ListPresetsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListPresetsRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ListPresetsRequestPrivate::ListPresetsRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListPresetsRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPresetsRequest
 * class' copy constructor.
 */
ListPresetsRequestPrivate::ListPresetsRequestPrivate(
    const ListPresetsRequestPrivate &other, ListPresetsRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
