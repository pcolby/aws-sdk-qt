// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetrecordrequest.h"
#include "batchgetrecordrequest_p.h"
#include "batchgetrecordresponse.h"
#include "sagemakerfeaturestoreruntimerequest_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::BatchGetRecordRequest
 * \brief The BatchGetRecordRequest class provides an interface for SageMakerFeatureStoreRuntime BatchGetRecord requests.
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 *
 *  Contains all data plane API operations and data types for the Amazon SageMaker Feature Store. Use this API to put,
 *  delete, and retrieve (get) features from a feature
 * 
 *  store>
 * 
 *  Use the following operations to configure your <code>OnlineStore</code> and <code>OfflineStore</code> features, and to
 *  create and manage feature
 * 
 *  groups> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFeatureGroup.html">CreateFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteFeatureGroup.html">DeleteFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeFeatureGroup.html">DescribeFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListFeatureGroups.html">ListFeatureGroups</a>
 *
 * \sa SageMakerFeatureStoreRuntimeClient::batchGetRecord
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetRecordRequest::BatchGetRecordRequest(const BatchGetRecordRequest &other)
    : SageMakerFeatureStoreRuntimeRequest(new BatchGetRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetRecordRequest object.
 */
BatchGetRecordRequest::BatchGetRecordRequest()
    : SageMakerFeatureStoreRuntimeRequest(new BatchGetRecordRequestPrivate(SageMakerFeatureStoreRuntimeRequest::BatchGetRecordAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetRecordRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::BatchGetRecordRequestPrivate
 * \brief The BatchGetRecordRequestPrivate class provides private implementation for BatchGetRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a BatchGetRecordRequestPrivate object for SageMakerFeatureStoreRuntime \a action,
 * with public implementation \a q.
 */
BatchGetRecordRequestPrivate::BatchGetRecordRequestPrivate(
    const SageMakerFeatureStoreRuntimeRequest::Action action, BatchGetRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetRecordRequest
 * class' copy constructor.
 */
BatchGetRecordRequestPrivate::BatchGetRecordRequestPrivate(
    const BatchGetRecordRequestPrivate &other, BatchGetRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
