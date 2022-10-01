// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpresetsrequest.h"
#include "listpresetsrequest_p.h"
#include "listpresetsresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListPresetsRequest
 * \brief The ListPresetsRequest class provides an interface for MediaConvert ListPresets requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listPresets
 */

/*!
 * Constructs a copy of \a other.
 */
ListPresetsRequest::ListPresetsRequest(const ListPresetsRequest &other)
    : MediaConvertRequest(new ListPresetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPresetsRequest object.
 */
ListPresetsRequest::ListPresetsRequest()
    : MediaConvertRequest(new ListPresetsRequestPrivate(MediaConvertRequest::ListPresetsAction, this))
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
 * \class QtAws::MediaConvert::ListPresetsRequestPrivate
 * \brief The ListPresetsRequestPrivate class provides private implementation for ListPresetsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListPresetsRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
ListPresetsRequestPrivate::ListPresetsRequestPrivate(
    const MediaConvertRequest::Action action, ListPresetsRequest * const q)
    : MediaConvertRequestPrivate(action, q)
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
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
