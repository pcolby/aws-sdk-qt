// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a CreateDataSourceFromS3RequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
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
