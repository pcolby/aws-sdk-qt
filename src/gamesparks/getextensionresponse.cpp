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

#include "getextensionresponse.h"
#include "getextensionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionResponse
 * \brief The GetExtensionResponse class provides an interace for GameSparks GetExtension responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtension
 */

/*!
 * Constructs a GetExtensionResponse object for \a reply to \a request, with parent \a parent.
 */
GetExtensionResponse::GetExtensionResponse(
        const GetExtensionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetExtensionResponsePrivate(this), parent)
{
    setRequest(new GetExtensionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExtensionRequest * GetExtensionResponse::request() const
{
    Q_D(const GetExtensionResponse);
    return static_cast<const GetExtensionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetExtension \a response.
 */
void GetExtensionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExtensionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetExtensionResponsePrivate
 * \brief The GetExtensionResponsePrivate class provides private implementation for GetExtensionResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionResponsePrivate object with public implementation \a q.
 */
GetExtensionResponsePrivate::GetExtensionResponsePrivate(
    GetExtensionResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetExtension response element from \a xml.
 */
void GetExtensionResponsePrivate::parseGetExtensionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExtensionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
