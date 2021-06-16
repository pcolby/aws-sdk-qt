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

#include "getstudioresponse.h"
#include "getstudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioResponse
 * \brief The GetStudioResponse class provides an interace for NimbleStudio GetStudio responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudio
 */

/*!
 * Constructs a GetStudioResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioResponse::GetStudioResponse(
        const GetStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStudioResponsePrivate(this), parent)
{
    setRequest(new GetStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioRequest * GetStudioResponse::request() const
{
    Q_D(const GetStudioResponse);
    return static_cast<const GetStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStudio \a response.
 */
void GetStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStudioResponsePrivate
 * \brief The GetStudioResponsePrivate class provides private implementation for GetStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioResponsePrivate object with public implementation \a q.
 */
GetStudioResponsePrivate::GetStudioResponsePrivate(
    GetStudioResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStudio response element from \a xml.
 */
void GetStudioResponsePrivate::parseGetStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
