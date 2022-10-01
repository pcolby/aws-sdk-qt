// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a CreateDataSourceFromRedshiftRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
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
