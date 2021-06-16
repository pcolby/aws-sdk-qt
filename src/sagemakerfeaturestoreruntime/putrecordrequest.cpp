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

#include "putrecordrequest.h"
#include "putrecordrequest_p.h"
#include "putrecordresponse.h"
#include "sagemakerfeaturestoreruntimerequest_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::PutRecordRequest
 * \brief The PutRecordRequest class provides an interface for SageMakerFeatureStoreRuntime PutRecord requests.
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
 * \sa SageMakerFeatureStoreRuntimeClient::putRecord
 */

/*!
 * Constructs a copy of \a other.
 */
PutRecordRequest::PutRecordRequest(const PutRecordRequest &other)
    : SageMakerFeatureStoreRuntimeRequest(new PutRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecordRequest object.
 */
PutRecordRequest::PutRecordRequest()
    : SageMakerFeatureStoreRuntimeRequest(new PutRecordRequestPrivate(SageMakerFeatureStoreRuntimeRequest::PutRecordAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::PutRecordRequestPrivate
 * \brief The PutRecordRequestPrivate class provides private implementation for PutRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a PutRecordRequestPrivate object for SageMakerFeatureStoreRuntime \a action,
 * with public implementation \a q.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const SageMakerFeatureStoreRuntimeRequest::Action action, PutRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRecordRequest
 * class' copy constructor.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const PutRecordRequestPrivate &other, PutRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
