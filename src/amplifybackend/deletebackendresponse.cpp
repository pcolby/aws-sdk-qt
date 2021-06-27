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

#include "deletebackendresponse.h"
#include "deletebackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendResponse
 * \brief The DeleteBackendResponse class provides an interace for AmplifyBackend DeleteBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackend
 */

/*!
 * Constructs a DeleteBackendResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendResponse::DeleteBackendResponse(
        const DeleteBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendRequest * DeleteBackendResponse::request() const
{
    return static_cast<const DeleteBackendRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackend \a response.
 */
void DeleteBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendResponsePrivate
 * \brief The DeleteBackendResponsePrivate class provides private implementation for DeleteBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendResponsePrivate object with public implementation \a q.
 */
DeleteBackendResponsePrivate::DeleteBackendResponsePrivate(
    DeleteBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackend response element from \a xml.
 */
void DeleteBackendResponsePrivate::parseDeleteBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
