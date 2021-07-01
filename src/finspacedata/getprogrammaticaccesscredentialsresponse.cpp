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

#include "getprogrammaticaccesscredentialsresponse.h"
#include "getprogrammaticaccesscredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::GetProgrammaticAccessCredentialsResponse
 * \brief The GetProgrammaticAccessCredentialsResponse class provides an interace for FinSpaceData GetProgrammaticAccessCredentials responses.
 *
 * \inmodule QtAwsFinSpaceData
 *
 *  The FinSpace APIs let you take actions inside the FinSpace environment.
 *
 * \sa FinSpaceDataClient::getProgrammaticAccessCredentials
 */

/*!
 * Constructs a GetProgrammaticAccessCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetProgrammaticAccessCredentialsResponse::GetProgrammaticAccessCredentialsResponse(
        const GetProgrammaticAccessCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinSpaceDataResponse(new GetProgrammaticAccessCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetProgrammaticAccessCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProgrammaticAccessCredentialsRequest * GetProgrammaticAccessCredentialsResponse::request() const
{
    Q_D(const GetProgrammaticAccessCredentialsResponse);
    return static_cast<const GetProgrammaticAccessCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinSpaceData GetProgrammaticAccessCredentials \a response.
 */
void GetProgrammaticAccessCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProgrammaticAccessCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinSpaceData::GetProgrammaticAccessCredentialsResponsePrivate
 * \brief The GetProgrammaticAccessCredentialsResponsePrivate class provides private implementation for GetProgrammaticAccessCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a GetProgrammaticAccessCredentialsResponsePrivate object with public implementation \a q.
 */
GetProgrammaticAccessCredentialsResponsePrivate::GetProgrammaticAccessCredentialsResponsePrivate(
    GetProgrammaticAccessCredentialsResponse * const q) : FinSpaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinSpaceData GetProgrammaticAccessCredentials response element from \a xml.
 */
void GetProgrammaticAccessCredentialsResponsePrivate::parseGetProgrammaticAccessCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProgrammaticAccessCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinSpaceData
} // namespace QtAws
