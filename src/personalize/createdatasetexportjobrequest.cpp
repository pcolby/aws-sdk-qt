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
