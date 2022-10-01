// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchjobexecutionsrequest.h"
#include "listbatchjobexecutionsrequest_p.h"
#include "listbatchjobexecutionsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListBatchJobExecutionsRequest
 * \brief The ListBatchJobExecutionsRequest class provides an interface for M2 ListBatchJobExecutions requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listBatchJobExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchJobExecutionsRequest::ListBatchJobExecutionsRequest(const ListBatchJobExecutionsRequest &other)
    : M2Request(new ListBatchJobExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchJobExecutionsRequest object.
 */
ListBatchJobExecutionsRequest::ListBatchJobExecutionsRequest()
    : M2Request(new ListBatchJobExecutionsRequestPrivate(M2Request::ListBatchJobExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchJobExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchJobExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchJobExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchJobExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListBatchJobExecutionsRequestPrivate
 * \brief The ListBatchJobExecutionsRequestPrivate class provides private implementation for ListBatchJobExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListBatchJobExecutionsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListBatchJobExecutionsRequestPrivate::ListBatchJobExecutionsRequestPrivate(
    const M2Request::Action action, ListBatchJobExecutionsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchJobExecutionsRequest
 * class' copy constructor.
 */
ListBatchJobExecutionsRequestPrivate::ListBatchJobExecutionsRequestPrivate(
    const ListBatchJobExecutionsRequestPrivate &other, ListBatchJobExecutionsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
