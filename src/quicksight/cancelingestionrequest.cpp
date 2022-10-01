// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelingestionrequest.h"
#include "cancelingestionrequest_p.h"
#include "cancelingestionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CancelIngestionRequest
 * \brief The CancelIngestionRequest class provides an interface for QuickSight CancelIngestion requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::cancelIngestion
 */

/*!
 * Constructs a copy of \a other.
 */
CancelIngestionRequest::CancelIngestionRequest(const CancelIngestionRequest &other)
    : QuickSightRequest(new CancelIngestionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelIngestionRequest object.
 */
CancelIngestionRequest::CancelIngestionRequest()
    : QuickSightRequest(new CancelIngestionRequestPrivate(QuickSightRequest::CancelIngestionAction, this))
{

}

/*!
 * \reimp
 */
bool CancelIngestionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelIngestionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelIngestionRequest::response(QNetworkReply * const reply) const
{
    return new CancelIngestionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CancelIngestionRequestPrivate
 * \brief The CancelIngestionRequestPrivate class provides private implementation for CancelIngestionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CancelIngestionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CancelIngestionRequestPrivate::CancelIngestionRequestPrivate(
    const QuickSightRequest::Action action, CancelIngestionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelIngestionRequest
 * class' copy constructor.
 */
CancelIngestionRequestPrivate::CancelIngestionRequestPrivate(
    const CancelIngestionRequestPrivate &other, CancelIngestionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
