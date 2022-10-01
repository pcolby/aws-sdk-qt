// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicestatusresponse.h"
#include "updatedevicestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateDeviceStatusResponse
 * \brief The UpdateDeviceStatusResponse class provides an interace for CognitoIdentityProvider UpdateDeviceStatus responses.
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
 * \sa CognitoIdentityProviderClient::updateDeviceStatus
 */

/*!
 * Constructs a UpdateDeviceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceStatusResponse::UpdateDeviceStatusResponse(
        const UpdateDeviceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateDeviceStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceStatusRequest * UpdateDeviceStatusResponse::request() const
{
    Q_D(const UpdateDeviceStatusResponse);
    return static_cast<const UpdateDeviceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateDeviceStatus \a response.
 */
void UpdateDeviceStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateDeviceStatusResponsePrivate
 * \brief The UpdateDeviceStatusResponsePrivate class provides private implementation for UpdateDeviceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateDeviceStatusResponsePrivate object with public implementation \a q.
 */
UpdateDeviceStatusResponsePrivate::UpdateDeviceStatusResponsePrivate(
    UpdateDeviceStatusResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateDeviceStatus response element from \a xml.
 */
void UpdateDeviceStatusResponsePrivate::parseUpdateDeviceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
