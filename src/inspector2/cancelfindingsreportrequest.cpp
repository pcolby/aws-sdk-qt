// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelfindingsreportrequest.h"
#include "cancelfindingsreportrequest_p.h"
#include "cancelfindingsreportresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CancelFindingsReportRequest
 * \brief The CancelFindingsReportRequest class provides an interface for Inspector2 CancelFindingsReport requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::cancelFindingsReport
 */

/*!
 * Constructs a copy of \a other.
 */
CancelFindingsReportRequest::CancelFindingsReportRequest(const CancelFindingsReportRequest &other)
    : Inspector2Request(new CancelFindingsReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelFindingsReportRequest object.
 */
CancelFindingsReportRequest::CancelFindingsReportRequest()
    : Inspector2Request(new CancelFindingsReportRequestPrivate(Inspector2Request::CancelFindingsReportAction, this))
{

}

/*!
 * \reimp
 */
bool CancelFindingsReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelFindingsReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelFindingsReportRequest::response(QNetworkReply * const reply) const
{
    return new CancelFindingsReportResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::CancelFindingsReportRequestPrivate
 * \brief The CancelFindingsReportRequestPrivate class provides private implementation for CancelFindingsReportRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CancelFindingsReportRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
CancelFindingsReportRequestPrivate::CancelFindingsReportRequestPrivate(
    const Inspector2Request::Action action, CancelFindingsReportRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelFindingsReportRequest
 * class' copy constructor.
 */
CancelFindingsReportRequestPrivate::CancelFindingsReportRequestPrivate(
    const CancelFindingsReportRequestPrivate &other, CancelFindingsReportRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
