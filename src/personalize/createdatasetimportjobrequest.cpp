// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobrequest_p.h"
#include "createdatasetimportjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetImportJobRequest
 * \brief The CreateDatasetImportJobRequest class provides an interface for Personalize CreateDatasetImportJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest(const CreateDatasetImportJobRequest &other)
    : PersonalizeRequest(new CreateDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetImportJobRequest object.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest()
    : PersonalizeRequest(new CreateDatasetImportJobRequestPrivate(PersonalizeRequest::CreateDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateDatasetImportJobRequestPrivate
 * \brief The CreateDatasetImportJobRequestPrivate class provides private implementation for CreateDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetImportJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateDatasetImportJobRequestPrivate::CreateDatasetImportJobRequestPrivate(
    const PersonalizeRequest::Action action, CreateDatasetImportJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetImportJobRequest
 * class' copy constructor.
 */
CreateDatasetImportJobRequestPrivate::CreateDatasetImportJobRequestPrivate(
    const CreateDatasetImportJobRequestPrivate &other, CreateDatasetImportJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
