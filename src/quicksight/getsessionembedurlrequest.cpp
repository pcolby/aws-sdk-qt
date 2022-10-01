// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
