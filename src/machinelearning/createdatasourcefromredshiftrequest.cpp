/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdatasourcefromredshiftrequest.h"
#include "createdatasourcefromredshiftrequest_p.h"
#include "createdatasourcefromredshiftresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRedshiftRequest
 * \brief The CreateDataSourceFromRedshiftRequest class provides an interface for MachineLearning CreateDataSourceFromRedshift requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromRedshift
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest(const CreateDataSourceFromRedshiftRequest &other)
    : MachineLearningRequest(new CreateDataSourceFromRedshiftRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceFromRedshiftRequest object.
 */
CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest()
    : MachineLearningRequest(new CreateDataSourceFromRedshiftRequestPrivate(MachineLearningRequest::CreateDataSourceFromRedshiftAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceFromRedshiftRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceFromRedshiftResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceFromRedshiftRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromRedshiftResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRedshiftRequestPrivate
 * \brief The CreateDataSourceFromRedshiftRequestPrivate class provides private implementation for CreateDataSourceFromRedshiftRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 *
 * Constructs a CreateDataSourceFromRedshiftRequestPrivate object for MachineLearning \a action with,
 * public implementation \a q.
 */
CreateDataSourceFromRedshiftRequestPrivate::CreateDataSourceFromRedshiftRequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromRedshiftRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromRedshiftRequest
 * class' copy constructor.
 */
CreateDataSourceFromRedshiftRequestPrivate::CreateDataSourceFromRedshiftRequestPrivate(
    const CreateDataSourceFromRedshiftRequestPrivate &other, CreateDataSourceFromRedshiftRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
