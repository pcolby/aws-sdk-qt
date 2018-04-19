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

#include "createdatasourcefroms3request.h"
#include "createdatasourcefroms3request_p.h"
#include "createdatasourcefroms3response.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromS3Request
 * \brief The CreateDataSourceFromS3Request class provides an interface for MachineLearning CreateDataSourceFromS3 requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromS3
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceFromS3Request::CreateDataSourceFromS3Request(const CreateDataSourceFromS3Request &other)
    : MachineLearningRequest(new CreateDataSourceFromS3RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceFromS3Request object.
 */
CreateDataSourceFromS3Request::CreateDataSourceFromS3Request()
    : MachineLearningRequest(new CreateDataSourceFromS3RequestPrivate(MachineLearningRequest::CreateDataSourceFromS3Action, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceFromS3Request::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceFromS3Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceFromS3Request::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromS3Response(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromS3RequestPrivate
 * \brief The CreateDataSourceFromS3RequestPrivate class provides private implementation for CreateDataSourceFromS3Request.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 *
 * Constructs a CreateDataSourceFromS3RequestPrivate object for MachineLearning \a action with,
 * public implementation \a q.
 */
CreateDataSourceFromS3RequestPrivate::CreateDataSourceFromS3RequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromS3Request * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromS3Request
 * class' copy constructor.
 */
CreateDataSourceFromS3RequestPrivate::CreateDataSourceFromS3RequestPrivate(
    const CreateDataSourceFromS3RequestPrivate &other, CreateDataSourceFromS3Request * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
