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

#include "getstudiocomponentresponse.h"
#include "getstudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioComponentResponse
 * \brief The GetStudioComponentResponse class provides an interace for NimbleStudio GetStudioComponent responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudioComponent
 */

/*!
 * Constructs a GetStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioComponentResponse::GetStudioComponentResponse(
        const GetStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStudioComponentResponsePrivate(this), parent)
{
    setRequest(new GetStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioComponentRequest * GetStudioComponentResponse::request() const
{
    return static_cast<const GetStudioComponentRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStudioComponent \a response.
 */
void GetStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStudioComponentResponsePrivate
 * \brief The GetStudioComponentResponsePrivate class provides private implementation for GetStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioComponentResponsePrivate object with public implementation \a q.
 */
GetStudioComponentResponsePrivate::GetStudioComponentResponsePrivate(
    GetStudioComponentResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStudioComponent response element from \a xml.
 */
void GetStudioComponentResponsePrivate::parseGetStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
