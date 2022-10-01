// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
