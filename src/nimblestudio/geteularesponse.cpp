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

#include "geteularesponse.h"
#include "geteularesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetEulaResponse
 * \brief The GetEulaResponse class provides an interace for NimbleStudio GetEula responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getEula
 */

/*!
 * Constructs a GetEulaResponse object for \a reply to \a request, with parent \a parent.
 */
GetEulaResponse::GetEulaResponse(
        const GetEulaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetEulaResponsePrivate(this), parent)
{
    setRequest(new GetEulaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEulaRequest * GetEulaResponse::request() const
{
    return static_cast<const GetEulaRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetEula \a response.
 */
void GetEulaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEulaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetEulaResponsePrivate
 * \brief The GetEulaResponsePrivate class provides private implementation for GetEulaResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetEulaResponsePrivate object with public implementation \a q.
 */
GetEulaResponsePrivate::GetEulaResponsePrivate(
    GetEulaResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetEula response element from \a xml.
 */
void GetEulaResponsePrivate::parseGetEulaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEulaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
