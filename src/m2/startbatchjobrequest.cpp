// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbatchjobrequest.h"
#include "startbatchjobrequest_p.h"
#include "startbatchjobresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StartBatchJobRequest
 * \brief The StartBatchJobRequest class provides an interface for M2 StartBatchJob requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::startBatchJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartBatchJobRequest::StartBatchJobRequest(const StartBatchJobRequest &other)
    : M2Request(new StartBatchJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBatchJobRequest object.
 */
StartBatchJobRequest::StartBatchJobRequest()
    : M2Request(new StartBatchJobRequestPrivate(M2Request::StartBatchJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartBatchJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBatchJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBatchJobRequest::response(QNetworkReply * const reply) const
{
    return new StartBatchJobResponse(*this, reply);
}

/*!
 * \class QtAws::M2::StartBatchJobRequestPrivate
 * \brief The StartBatchJobRequestPrivate class provides private implementation for StartBatchJobRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StartBatchJobRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
StartBatchJobRequestPrivate::StartBatchJobRequestPrivate(
    const M2Request::Action action, StartBatchJobRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBatchJobRequest
 * class' copy constructor.
 */
StartBatchJobRequestPrivate::StartBatchJobRequestPrivate(
    const StartBatchJobRequestPrivate &other, StartBatchJobRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
