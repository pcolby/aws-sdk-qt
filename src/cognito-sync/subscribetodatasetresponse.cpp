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

#include "subscribetodatasetresponse.h"
#include "subscribetodatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::SubscribeToDatasetResponse
 *
 * \brief The SubscribeToDatasetResponse class provides an interace for CognitoSync SubscribeToDataset responses.
 *
 * \ingroup CognitoSync
 *
 *  <fullname>Amazon Cognito Sync</fullname>
 * 
 *  Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 *  user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 *  data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 *  mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 *  data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 * 
 *  identity>
 * 
 *  With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 *  In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 *  href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 * 
 *  service</a>>
 * 
 *  If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 *  Mobile SDK. To learn more, see the <a
 *  href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 *  and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 *
 * \sa CognitoSyncClient::subscribeToDataset
 */

/*!
 * @brief  Constructs a new SubscribeToDatasetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubscribeToDatasetResponse::SubscribeToDatasetResponse(
        const SubscribeToDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new SubscribeToDatasetResponsePrivate(this), parent)
{
    setRequest(new SubscribeToDatasetRequest(request));
    setReply(reply);
}

const SubscribeToDatasetRequest * SubscribeToDatasetResponse::request() const
{
    Q_D(const SubscribeToDatasetResponse);
    return static_cast<const SubscribeToDatasetRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoSync SubscribeToDataset response.
 *
 * @param  response  Response to parse.
 */
void SubscribeToDatasetResponse::parseSuccess(QIODevice &response)
{
    Q_D(SubscribeToDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SubscribeToDatasetResponsePrivate
 *
 * \brief Private implementation for SubscribeToDatasetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SubscribeToDatasetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubscribeToDatasetResponse instance.
 */
SubscribeToDatasetResponsePrivate::SubscribeToDatasetResponsePrivate(
    SubscribeToDatasetResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoSync SubscribeToDatasetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubscribeToDatasetResponsePrivate::parseSubscribeToDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeToDatasetResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
