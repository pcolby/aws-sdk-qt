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

#include "updatebackendstorageresponse.h"
#include "updatebackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageResponse
 * \brief The UpdateBackendStorageResponse class provides an interace for AmplifyBackend UpdateBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendStorage
 */

/*!
 * Constructs a UpdateBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendStorageResponse::UpdateBackendStorageResponse(
        const UpdateBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendStorageResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendStorageRequest * UpdateBackendStorageResponse::request() const
{
    Q_D(const UpdateBackendStorageResponse);
    return static_cast<const UpdateBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendStorage \a response.
 */
void UpdateBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageResponsePrivate
 * \brief The UpdateBackendStorageResponsePrivate class provides private implementation for UpdateBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendStorageResponsePrivate object with public implementation \a q.
 */
UpdateBackendStorageResponsePrivate::UpdateBackendStorageResponsePrivate(
    UpdateBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendStorage response element from \a xml.
 */
void UpdateBackendStorageResponsePrivate::parseUpdateBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
