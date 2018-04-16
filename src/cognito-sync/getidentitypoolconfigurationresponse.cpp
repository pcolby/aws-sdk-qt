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

#include "getidentitypoolconfigurationresponse.h"
#include "getidentitypoolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::GetIdentityPoolConfigurationResponse
 *
 * \brief The GetIdentityPoolConfigurationResponse class provides an interace for CognitoSync GetIdentityPoolConfiguration responses.
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
 * \sa CognitoSyncClient::getIdentityPoolConfiguration
 */

/*!
 * @brief  Constructs a new GetIdentityPoolConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityPoolConfigurationResponse::GetIdentityPoolConfigurationResponse(
        const GetIdentityPoolConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new GetIdentityPoolConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoolConfigurationRequest(request));
    setReply(reply);
}

const GetIdentityPoolConfigurationRequest * GetIdentityPoolConfigurationResponse::request() const
{
    Q_D(const GetIdentityPoolConfigurationResponse);
    return static_cast<const GetIdentityPoolConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoSync GetIdentityPoolConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityPoolConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIdentityPoolConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetIdentityPoolConfigurationResponsePrivate
 *
 * \brief Private implementation for GetIdentityPoolConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityPoolConfigurationResponse instance.
 */
GetIdentityPoolConfigurationResponsePrivate::GetIdentityPoolConfigurationResponsePrivate(
    GetIdentityPoolConfigurationResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoSync GetIdentityPoolConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityPoolConfigurationResponsePrivate::parseGetIdentityPoolConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoolConfigurationResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
