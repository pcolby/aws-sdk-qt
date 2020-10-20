/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
