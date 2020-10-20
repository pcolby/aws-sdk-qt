/*
    Copyright 2013-2020 Paul Colby

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

#include "createdatasourcefromrdsrequest.h"
#include "createdatasourcefromrdsrequest_p.h"
#include "createdatasourcefromrdsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRDSRequest
 * \brief The CreateDataSourceFromRDSRequest class provides an interface for MachineLearning CreateDataSourceFromRDS requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromRDS
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataSourceFromRDSRequest::CreateDataSourceFromRDSRequest(const CreateDataSourceFromRDSRequest &other)
    : MachineLearningRequest(new CreateDataSourceFromRDSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataSourceFromRDSRequest object.
 */
CreateDataSourceFromRDSRequest::CreateDataSourceFromRDSRequest()
    : MachineLearningRequest(new CreateDataSourceFromRDSRequestPrivate(MachineLearningRequest::CreateDataSourceFromRDSAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataSourceFromRDSRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataSourceFromRDSResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataSourceFromRDSRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromRDSResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRDSRequestPrivate
 * \brief The CreateDataSourceFromRDSRequestPrivate class provides private implementation for CreateDataSourceFromRDSRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateDataSourceFromRDSRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
CreateDataSourceFromRDSRequestPrivate::CreateDataSourceFromRDSRequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromRDSRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromRDSRequest
 * class' copy constructor.
 */
CreateDataSourceFromRDSRequestPrivate::CreateDataSourceFromRDSRequestPrivate(
    const CreateDataSourceFromRDSRequestPrivate &other, CreateDataSourceFromRDSRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
