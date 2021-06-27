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

#include "getbackendresponse.h"
#include "getbackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendResponse
 * \brief The GetBackendResponse class provides an interace for AmplifyBackend GetBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackend
 */

/*!
 * Constructs a GetBackendResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendResponse::GetBackendResponse(
        const GetBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendResponsePrivate(this), parent)
{
    setRequest(new GetBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendRequest * GetBackendResponse::request() const
{
    return static_cast<const GetBackendRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackend \a response.
 */
void GetBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendResponsePrivate
 * \brief The GetBackendResponsePrivate class provides private implementation for GetBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendResponsePrivate object with public implementation \a q.
 */
GetBackendResponsePrivate::GetBackendResponsePrivate(
    GetBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackend response element from \a xml.
 */
void GetBackendResponsePrivate::parseGetBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
