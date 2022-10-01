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

#include "getsessionembedurlrequest.h"
#include "getsessionembedurlrequest_p.h"
#include "getsessionembedurlresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlRequest
 * \brief The GetSessionEmbedUrlRequest class provides an interface for QuickSight GetSessionEmbedUrl requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::getSessionEmbedUrl
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionEmbedUrlRequest::GetSessionEmbedUrlRequest(const GetSessionEmbedUrlRequest &other)
    : QuickSightRequest(new GetSessionEmbedUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionEmbedUrlRequest object.
 */
GetSessionEmbedUrlRequest::GetSessionEmbedUrlRequest()
    : QuickSightRequest(new GetSessionEmbedUrlRequestPrivate(QuickSightRequest::GetSessionEmbedUrlAction, this))
{

}

/*!
 * \reimp
 */
bool GetSessionEmbedUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSessionEmbedUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSessionEmbedUrlRequest::response(QNetworkReply * const reply) const
{
    return new GetSessionEmbedUrlResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GetSessionEmbedUrlRequestPrivate
 * \brief The GetSessionEmbedUrlRequestPrivate class provides private implementation for GetSessionEmbedUrlRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GetSessionEmbedUrlRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GetSessionEmbedUrlRequestPrivate::GetSessionEmbedUrlRequestPrivate(
    const QuickSightRequest::Action action, GetSessionEmbedUrlRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSessionEmbedUrlRequest
 * class' copy constructor.
 */
GetSessionEmbedUrlRequestPrivate::GetSessionEmbedUrlRequestPrivate(
    const GetSessionEmbedUrlRequestPrivate &other, GetSessionEmbedUrlRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
