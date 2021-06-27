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

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetDeviceResponse
 * \brief The GetDeviceResponse class provides an interace for Braket GetDevice responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::getDevice
 */

/*!
 * Constructs a GetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceResponse::GetDeviceResponse(
        const GetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRequest * GetDeviceResponse::request() const
{
    return static_cast<const GetDeviceRequest *>(BraketResponse::request());
}

/*!
 * \reimp
 * Parses a successful Braket GetDevice \a response.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::GetDeviceResponsePrivate
 * \brief The GetDeviceResponsePrivate class provides private implementation for GetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetDeviceResponsePrivate object with public implementation \a q.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket GetDevice response element from \a xml.
 */
void GetDeviceResponsePrivate::parseGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
