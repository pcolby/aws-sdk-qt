// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchjobdefinitionsrequest.h"
#include "listbatchjobdefinitionsrequest_p.h"
#include "listbatchjobdefinitionsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListBatchJobDefinitionsRequest
 * \brief The ListBatchJobDefinitionsRequest class provides an interface for M2 ListBatchJobDefinitions requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listBatchJobDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchJobDefinitionsRequest::ListBatchJobDefinitionsRequest(const ListBatchJobDefinitionsRequest &other)
    : M2Request(new ListBatchJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchJobDefinitionsRequest object.
 */
ListBatchJobDefinitionsRequest::ListBatchJobDefinitionsRequest()
    : M2Request(new ListBatchJobDefinitionsRequestPrivate(M2Request::ListBatchJobDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchJobDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchJobDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchJobDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListBatchJobDefinitionsRequestPrivate
 * \brief The ListBatchJobDefinitionsRequestPrivate class provides private implementation for ListBatchJobDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListBatchJobDefinitionsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListBatchJobDefinitionsRequestPrivate::ListBatchJobDefinitionsRequestPrivate(
    const M2Request::Action action, ListBatchJobDefinitionsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchJobDefinitionsRequest
 * class' copy constructor.
 */
ListBatchJobDefinitionsRequestPrivate::ListBatchJobDefinitionsRequestPrivate(
    const ListBatchJobDefinitionsRequestPrivate &other, ListBatchJobDefinitionsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
