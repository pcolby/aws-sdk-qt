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

#include "deletebackendstorageresponse.h"
#include "deletebackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageResponse
 * \brief The DeleteBackendStorageResponse class provides an interace for AmplifyBackend DeleteBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendStorage
 */

/*!
 * Constructs a DeleteBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendStorageResponse::DeleteBackendStorageResponse(
        const DeleteBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendStorageResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendStorageRequest * DeleteBackendStorageResponse::request() const
{
    Q_D(const DeleteBackendStorageResponse);
    return static_cast<const DeleteBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackendStorage \a response.
 */
void DeleteBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendStorageResponsePrivate
 * \brief The DeleteBackendStorageResponsePrivate class provides private implementation for DeleteBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendStorageResponsePrivate object with public implementation \a q.
 */
DeleteBackendStorageResponsePrivate::DeleteBackendStorageResponsePrivate(
    DeleteBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackendStorage response element from \a xml.
 */
void DeleteBackendStorageResponsePrivate::parseDeleteBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
