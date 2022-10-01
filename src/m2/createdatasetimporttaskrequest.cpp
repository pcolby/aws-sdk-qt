// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetimporttaskrequest.h"
#include "createdatasetimporttaskrequest_p.h"
#include "createdatasetimporttaskresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CreateDataSetImportTaskRequest
 * \brief The CreateDataSetImportTaskRequest class provides an interface for M2 CreateDataSetImportTask requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::createDataSetImportTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSetImportTaskRequest::CreateDataSetImportTaskRequest(const CreateDataSetImportTaskRequest &other)
    : M2Request(new CreateDataSetImportTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSetImportTaskRequest object.
 */
CreateDataSetImportTaskRequest::CreateDataSetImportTaskRequest()
    : M2Request(new CreateDataSetImportTaskRequestPrivate(M2Request::CreateDataSetImportTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSetImportTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSetImportTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSetImportTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSetImportTaskResponse(*this, reply);
}

/*!
 * \class QtAws::M2::CreateDataSetImportTaskRequestPrivate
 * \brief The CreateDataSetImportTaskRequestPrivate class provides private implementation for CreateDataSetImportTaskRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CreateDataSetImportTaskRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
CreateDataSetImportTaskRequestPrivate::CreateDataSetImportTaskRequestPrivate(
    const M2Request::Action action, CreateDataSetImportTaskRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSetImportTaskRequest
 * class' copy constructor.
 */
CreateDataSetImportTaskRequestPrivate::CreateDataSetImportTaskRequestPrivate(
    const CreateDataSetImportTaskRequestPrivate &other, CreateDataSetImportTaskRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
