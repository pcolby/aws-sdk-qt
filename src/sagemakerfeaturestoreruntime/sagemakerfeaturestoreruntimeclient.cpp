// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakerfeaturestoreruntimeclient.h"
#include "sagemakerfeaturestoreruntimeclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetrecordrequest.h"
#include "batchgetrecordresponse.h"
#include "deleterecordrequest.h"
#include "deleterecordresponse.h"
#include "getrecordrequest.h"
#include "getrecordresponse.h"
#include "putrecordrequest.h"
#include "putrecordresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SageMakerFeatureStoreRuntime
 * \brief Contains classess for accessing Amazon SageMaker Feature Store Runtime.
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClient
 * \brief The SageMakerFeatureStoreRuntimeClient class provides access to the Amazon SageMaker Feature Store Runtime service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a SageMakerFeatureStoreRuntimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerFeatureStoreRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerFeatureStoreRuntimeClient);
    d->apiVersion = QStringLiteral("2020-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("featurestore-runtime.sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Feature Store Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * \overload SageMakerFeatureStoreRuntimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerFeatureStoreRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerFeatureStoreRuntimeClient);
    d->apiVersion = QStringLiteral("2020-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("featurestore-runtime.sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Feature Store Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * Sends \a request to the SageMakerFeatureStoreRuntimeClient service, and returns a pointer to an
 * BatchGetRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a batch of <code>Records</code> from a
 */
BatchGetRecordResponse * SageMakerFeatureStoreRuntimeClient::batchGetRecord(const BatchGetRecordRequest &request)
{
    return qobject_cast<BatchGetRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerFeatureStoreRuntimeClient service, and returns a pointer to an
 * DeleteRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>Record</code> from a <code>FeatureGroup</code>. A new record will show up in the
 * <code>OfflineStore</code> when the <code>DeleteRecord</code> API is called. This record will have a value of
 * <code>True</code> in the <code>is_deleted</code>
 */
DeleteRecordResponse * SageMakerFeatureStoreRuntimeClient::deleteRecord(const DeleteRecordRequest &request)
{
    return qobject_cast<DeleteRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerFeatureStoreRuntimeClient service, and returns a pointer to an
 * GetRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>. Only the latest records stored in the
 * <code>OnlineStore</code> can be retrieved. If no Record with <code>RecordIdentifierValue</code> is found, then an empty
 * result is returned.
 */
GetRecordResponse * SageMakerFeatureStoreRuntimeClient::getRecord(const GetRecordRequest &request)
{
    return qobject_cast<GetRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerFeatureStoreRuntimeClient service, and returns a pointer to an
 * PutRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used for data ingestion into the <code>FeatureStore</code>. The <code>PutRecord</code> API writes to both the
 * <code>OnlineStore</code> and <code>OfflineStore</code>. If the record is the latest record for the
 * <code>recordIdentifier</code>, the record is written to both the <code>OnlineStore</code> and <code>OfflineStore</code>.
 * If the record is a historic record, it is written only to the
 */
PutRecordResponse * SageMakerFeatureStoreRuntimeClient::putRecord(const PutRecordRequest &request)
{
    return qobject_cast<PutRecordResponse *>(send(request));
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientPrivate
 * \brief The SageMakerFeatureStoreRuntimeClientPrivate class provides private implementation for SageMakerFeatureStoreRuntimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a SageMakerFeatureStoreRuntimeClientPrivate object with public implementation \a q.
 */
SageMakerFeatureStoreRuntimeClientPrivate::SageMakerFeatureStoreRuntimeClientPrivate(SageMakerFeatureStoreRuntimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
