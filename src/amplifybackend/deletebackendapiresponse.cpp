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

#include "deletebackendapiresponse.h"
#include "deletebackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIResponse
 * \brief The DeleteBackendAPIResponse class provides an interace for AmplifyBackend DeleteBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAPI
 */

/*!
 * Constructs a DeleteBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendAPIResponse::DeleteBackendAPIResponse(
        const DeleteBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendAPIResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendAPIRequest * DeleteBackendAPIResponse::request() const
{
    return static_cast<const DeleteBackendAPIRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackendAPI \a response.
 */
void DeleteBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIResponsePrivate
 * \brief The DeleteBackendAPIResponsePrivate class provides private implementation for DeleteBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAPIResponsePrivate object with public implementation \a q.
 */
DeleteBackendAPIResponsePrivate::DeleteBackendAPIResponsePrivate(
    DeleteBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackendAPI response element from \a xml.
 */
void DeleteBackendAPIResponsePrivate::parseDeleteBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
