// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetimporttaskrequest.h"
#include "getdatasetimporttaskrequest_p.h"
#include "getdatasetimporttaskresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetDataSetImportTaskRequest
 * \brief The GetDataSetImportTaskRequest class provides an interface for M2 GetDataSetImportTask requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getDataSetImportTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataSetImportTaskRequest::GetDataSetImportTaskRequest(const GetDataSetImportTaskRequest &other)
    : M2Request(new GetDataSetImportTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataSetImportTaskRequest object.
 */
GetDataSetImportTaskRequest::GetDataSetImportTaskRequest()
    : M2Request(new GetDataSetImportTaskRequestPrivate(M2Request::GetDataSetImportTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataSetImportTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataSetImportTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSetImportTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSetImportTaskResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetDataSetImportTaskRequestPrivate
 * \brief The GetDataSetImportTaskRequestPrivate class provides private implementation for GetDataSetImportTaskRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetDataSetImportTaskRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetDataSetImportTaskRequestPrivate::GetDataSetImportTaskRequestPrivate(
    const M2Request::Action action, GetDataSetImportTaskRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataSetImportTaskRequest
 * class' copy constructor.
 */
GetDataSetImportTaskRequestPrivate::GetDataSetImportTaskRequestPrivate(
    const GetDataSetImportTaskRequestPrivate &other, GetDataSetImportTaskRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
