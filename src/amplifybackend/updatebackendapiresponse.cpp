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

#include "updatebackendapiresponse.h"
#include "updatebackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIResponse
 * \brief The UpdateBackendAPIResponse class provides an interace for AmplifyBackend UpdateBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAPI
 */

/*!
 * Constructs a UpdateBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendAPIResponse::UpdateBackendAPIResponse(
        const UpdateBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendAPIResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendAPIRequest * UpdateBackendAPIResponse::request() const
{
    return static_cast<const UpdateBackendAPIRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendAPI \a response.
 */
void UpdateBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIResponsePrivate
 * \brief The UpdateBackendAPIResponsePrivate class provides private implementation for UpdateBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAPIResponsePrivate object with public implementation \a q.
 */
UpdateBackendAPIResponsePrivate::UpdateBackendAPIResponsePrivate(
    UpdateBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendAPI response element from \a xml.
 */
void UpdateBackendAPIResponsePrivate::parseUpdateBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
