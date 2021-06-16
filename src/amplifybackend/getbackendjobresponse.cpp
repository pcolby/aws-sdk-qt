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

#include "getbackendjobresponse.h"
#include "getbackendjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobResponse
 * \brief The GetBackendJobResponse class provides an interace for AmplifyBackend GetBackendJob responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendJob
 */

/*!
 * Constructs a GetBackendJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendJobResponse::GetBackendJobResponse(
        const GetBackendJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendJobResponsePrivate(this), parent)
{
    setRequest(new GetBackendJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendJobRequest * GetBackendJobResponse::request() const
{
    Q_D(const GetBackendJobResponse);
    return static_cast<const GetBackendJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendJob \a response.
 */
void GetBackendJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendJobResponsePrivate
 * \brief The GetBackendJobResponsePrivate class provides private implementation for GetBackendJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendJobResponsePrivate object with public implementation \a q.
 */
GetBackendJobResponsePrivate::GetBackendJobResponsePrivate(
    GetBackendJobResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendJob response element from \a xml.
 */
void GetBackendJobResponsePrivate::parseGetBackendJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
