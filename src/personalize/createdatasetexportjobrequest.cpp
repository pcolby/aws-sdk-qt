// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetexportjobrequest.h"
#include "createdatasetexportjobrequest_p.h"
#include "createdatasetexportjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetExportJobRequest
 * \brief The CreateDatasetExportJobRequest class provides an interface for Personalize CreateDatasetExportJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetExportJobRequest::CreateDatasetExportJobRequest(const CreateDatasetExportJobRequest &other)
    : PersonalizeRequest(new CreateDatasetExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetExportJobRequest object.
 */
CreateDatasetExportJobRequest::CreateDatasetExportJobRequest()
    : PersonalizeRequest(new CreateDatasetExportJobRequestPrivate(PersonalizeRequest::CreateDatasetExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateDatasetExportJobRequestPrivate
 * \brief The CreateDatasetExportJobRequestPrivate class provides private implementation for CreateDatasetExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetExportJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateDatasetExportJobRequestPrivate::CreateDatasetExportJobRequestPrivate(
    const PersonalizeRequest::Action action, CreateDatasetExportJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetExportJobRequest
 * class' copy constructor.
 */
CreateDatasetExportJobRequestPrivate::CreateDatasetExportJobRequestPrivate(
    const CreateDatasetExportJobRequestPrivate &other, CreateDatasetExportJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
