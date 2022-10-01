// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdashboardembedurlrequest.h"
#include "getdashboardembedurlrequest_p.h"
#include "getdashboardembedurlresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GetDashboardEmbedUrlRequest
 * \brief The GetDashboardEmbedUrlRequest class provides an interface for QuickSight GetDashboardEmbedUrl requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::getDashboardEmbedUrl
 */

/*!
 * Constructs a copy of \a other.
 */
GetDashboardEmbedUrlRequest::GetDashboardEmbedUrlRequest(const GetDashboardEmbedUrlRequest &other)
    : QuickSightRequest(new GetDashboardEmbedUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDashboardEmbedUrlRequest object.
 */
GetDashboardEmbedUrlRequest::GetDashboardEmbedUrlRequest()
    : QuickSightRequest(new GetDashboardEmbedUrlRequestPrivate(QuickSightRequest::GetDashboardEmbedUrlAction, this))
{

}

/*!
 * \reimp
 */
bool GetDashboardEmbedUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDashboardEmbedUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDashboardEmbedUrlRequest::response(QNetworkReply * const reply) const
{
    return new GetDashboardEmbedUrlResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GetDashboardEmbedUrlRequestPrivate
 * \brief The GetDashboardEmbedUrlRequestPrivate class provides private implementation for GetDashboardEmbedUrlRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GetDashboardEmbedUrlRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GetDashboardEmbedUrlRequestPrivate::GetDashboardEmbedUrlRequestPrivate(
    const QuickSightRequest::Action action, GetDashboardEmbedUrlRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDashboardEmbedUrlRequest
 * class' copy constructor.
 */
GetDashboardEmbedUrlRequestPrivate::GetDashboardEmbedUrlRequestPrivate(
    const GetDashboardEmbedUrlRequestPrivate &other, GetDashboardEmbedUrlRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
