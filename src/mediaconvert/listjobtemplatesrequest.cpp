/*
    Copyright 2013-2021 Paul Colby

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

#include "listjobtemplatesrequest.h"
#include "listjobtemplatesrequest_p.h"
#include "listjobtemplatesresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListJobTemplatesRequest
 * \brief The ListJobTemplatesRequest class provides an interface for MediaConvert ListJobTemplates requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listJobTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobTemplatesRequest::ListJobTemplatesRequest(const ListJobTemplatesRequest &other)
    : MediaConvertRequest(new ListJobTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobTemplatesRequest object.
 */
ListJobTemplatesRequest::ListJobTemplatesRequest()
    : MediaConvertRequest(new ListJobTemplatesRequestPrivate(MediaConvertRequest::ListJobTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListJobTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::ListJobTemplatesRequestPrivate
 * \brief The ListJobTemplatesRequestPrivate class provides private implementation for ListJobTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListJobTemplatesRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
ListJobTemplatesRequestPrivate::ListJobTemplatesRequestPrivate(
    const MediaConvertRequest::Action action, ListJobTemplatesRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobTemplatesRequest
 * class' copy constructor.
 */
ListJobTemplatesRequestPrivate::ListJobTemplatesRequestPrivate(
    const ListJobTemplatesRequestPrivate &other, ListJobTemplatesRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
