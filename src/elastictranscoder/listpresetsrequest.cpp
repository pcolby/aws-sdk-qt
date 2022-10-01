// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
