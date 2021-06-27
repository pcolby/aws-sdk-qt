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

#include "batchgetrecordresponse.h"
#include "batchgetrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::BatchGetRecordResponse
 * \brief The BatchGetRecordResponse class provides an interace for SageMakerFeatureStoreRuntime BatchGetRecord responses.
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
 * Constructs a BatchGetRecordResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetRecordResponse::BatchGetRecordResponse(
        const BatchGetRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerFeatureStoreRuntimeResponse(new BatchGetRecordResponsePrivate(this), parent)
{
    setRequest(new BatchGetRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetRecordRequest * BatchGetRecordResponse::request() const
{
    return static_cast<const BatchGetRecordRequest *>(SageMakerFeatureStoreRuntimeResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMakerFeatureStoreRuntime BatchGetRecord \a response.
 */
void BatchGetRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::BatchGetRecordResponsePrivate
 * \brief The BatchGetRecordResponsePrivate class provides private implementation for BatchGetRecordResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a BatchGetRecordResponsePrivate object with public implementation \a q.
 */
BatchGetRecordResponsePrivate::BatchGetRecordResponsePrivate(
    BatchGetRecordResponse * const q) : SageMakerFeatureStoreRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerFeatureStoreRuntime BatchGetRecord response element from \a xml.
 */
void BatchGetRecordResponsePrivate::parseBatchGetRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
