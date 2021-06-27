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

#include "updatebackendconfigresponse.h"
#include "updatebackendconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigResponse
 * \brief The UpdateBackendConfigResponse class provides an interace for AmplifyBackend UpdateBackendConfig responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendConfig
 */

/*!
 * Constructs a UpdateBackendConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendConfigResponse::UpdateBackendConfigResponse(
        const UpdateBackendConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendConfigRequest * UpdateBackendConfigResponse::request() const
{
    return static_cast<const UpdateBackendConfigRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendConfig \a response.
 */
void UpdateBackendConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigResponsePrivate
 * \brief The UpdateBackendConfigResponsePrivate class provides private implementation for UpdateBackendConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendConfigResponsePrivate object with public implementation \a q.
 */
UpdateBackendConfigResponsePrivate::UpdateBackendConfigResponsePrivate(
    UpdateBackendConfigResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendConfig response element from \a xml.
 */
void UpdateBackendConfigResponsePrivate::parseUpdateBackendConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
