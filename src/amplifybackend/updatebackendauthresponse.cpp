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

#include "updatebackendauthresponse.h"
#include "updatebackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthResponse
 * \brief The UpdateBackendAuthResponse class provides an interace for AmplifyBackend UpdateBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAuth
 */

/*!
 * Constructs a UpdateBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendAuthResponse::UpdateBackendAuthResponse(
        const UpdateBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendAuthResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendAuthRequest * UpdateBackendAuthResponse::request() const
{
    return static_cast<const UpdateBackendAuthRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendAuth \a response.
 */
void UpdateBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAuthResponsePrivate
 * \brief The UpdateBackendAuthResponsePrivate class provides private implementation for UpdateBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAuthResponsePrivate object with public implementation \a q.
 */
UpdateBackendAuthResponsePrivate::UpdateBackendAuthResponsePrivate(
    UpdateBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendAuth response element from \a xml.
 */
void UpdateBackendAuthResponsePrivate::parseUpdateBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
