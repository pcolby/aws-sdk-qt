/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
