// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensreviewreportrequest.h"
#include "getlensreviewreportrequest_p.h"
#include "getlensreviewreportresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensReviewReportRequest
 * \brief The GetLensReviewReportRequest class provides an interface for WellArchitected GetLensReviewReport requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getLensReviewReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetLensReviewReportRequest::GetLensReviewReportRequest(const GetLensReviewReportRequest &other)
    : WellArchitectedRequest(new GetLensReviewReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLensReviewReportRequest object.
 */
GetLensReviewReportRequest::GetLensReviewReportRequest()
    : WellArchitectedRequest(new GetLensReviewReportRequestPrivate(WellArchitectedRequest::GetLensReviewReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetLensReviewReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLensReviewReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLensReviewReportRequest::response(QNetworkReply * const reply) const
{
    return new GetLensReviewReportResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetLensReviewReportRequestPrivate
 * \brief The GetLensReviewReportRequestPrivate class provides private implementation for GetLensReviewReportRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensReviewReportRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetLensReviewReportRequestPrivate::GetLensReviewReportRequestPrivate(
    const WellArchitectedRequest::Action action, GetLensReviewReportRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLensReviewReportRequest
 * class' copy constructor.
 */
GetLensReviewReportRequestPrivate::GetLensReviewReportRequestPrivate(
    const GetLensReviewReportRequestPrivate &other, GetLensReviewReportRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
