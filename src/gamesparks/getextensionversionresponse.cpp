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

#include "getextensionversionresponse.h"
#include "getextensionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionVersionResponse
 * \brief The GetExtensionVersionResponse class provides an interace for GameSparks GetExtensionVersion responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtensionVersion
 */

/*!
 * Constructs a GetExtensionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetExtensionVersionResponse::GetExtensionVersionResponse(
        const GetExtensionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetExtensionVersionResponsePrivate(this), parent)
{
    setRequest(new GetExtensionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExtensionVersionRequest * GetExtensionVersionResponse::request() const
{
    Q_D(const GetExtensionVersionResponse);
    return static_cast<const GetExtensionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetExtensionVersion \a response.
 */
void GetExtensionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExtensionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetExtensionVersionResponsePrivate
 * \brief The GetExtensionVersionResponsePrivate class provides private implementation for GetExtensionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionVersionResponsePrivate object with public implementation \a q.
 */
GetExtensionVersionResponsePrivate::GetExtensionVersionResponsePrivate(
    GetExtensionVersionResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetExtensionVersion response element from \a xml.
 */
void GetExtensionVersionResponsePrivate::parseGetExtensionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExtensionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
