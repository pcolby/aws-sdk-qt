// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
