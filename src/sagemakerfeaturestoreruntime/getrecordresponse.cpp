// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordresponse.h"
#include "getrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::GetRecordResponse
 * \brief The GetRecordResponse class provides an interace for SageMakerFeatureStoreRuntime GetRecord responses.
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
 * \sa SageMakerFeatureStoreRuntimeClient::getRecord
 */

/*!
 * Constructs a GetRecordResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecordResponse::GetRecordResponse(
        const GetRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerFeatureStoreRuntimeResponse(new GetRecordResponsePrivate(this), parent)
{
    setRequest(new GetRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecordRequest * GetRecordResponse::request() const
{
    Q_D(const GetRecordResponse);
    return static_cast<const GetRecordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMakerFeatureStoreRuntime GetRecord \a response.
 */
void GetRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::GetRecordResponsePrivate
 * \brief The GetRecordResponsePrivate class provides private implementation for GetRecordResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a GetRecordResponsePrivate object with public implementation \a q.
 */
GetRecordResponsePrivate::GetRecordResponsePrivate(
    GetRecordResponse * const q) : SageMakerFeatureStoreRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerFeatureStoreRuntime GetRecord response element from \a xml.
 */
void GetRecordResponsePrivate::parseGetRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
