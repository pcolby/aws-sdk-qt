// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetDeviceResponse
 * \brief The GetDeviceResponse class provides an interace for CognitoIdentityProvider GetDevice responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getDevice
 */

/*!
 * Constructs a GetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceResponse::GetDeviceResponse(
        const GetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRequest * GetDeviceResponse::request() const
{
    Q_D(const GetDeviceResponse);
    return static_cast<const GetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetDevice \a response.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetDeviceResponsePrivate
 * \brief The GetDeviceResponsePrivate class provides private implementation for GetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetDeviceResponsePrivate object with public implementation \a q.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetDevice response element from \a xml.
 */
void GetDeviceResponsePrivate::parseGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
