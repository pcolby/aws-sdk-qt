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

#include "getbackendapiresponse.h"
#include "getbackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIResponse
 * \brief The GetBackendAPIResponse class provides an interace for AmplifyBackend GetBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPI
 */

/*!
 * Constructs a GetBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAPIResponse::GetBackendAPIResponse(
        const GetBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAPIResponsePrivate(this), parent)
{
    setRequest(new GetBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAPIRequest * GetBackendAPIResponse::request() const
{
    Q_D(const GetBackendAPIResponse);
    return static_cast<const GetBackendAPIRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAPI \a response.
 */
void GetBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIResponsePrivate
 * \brief The GetBackendAPIResponsePrivate class provides private implementation for GetBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIResponsePrivate object with public implementation \a q.
 */
GetBackendAPIResponsePrivate::GetBackendAPIResponsePrivate(
    GetBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAPI response element from \a xml.
 */
void GetBackendAPIResponsePrivate::parseGetBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
