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

#include "transferinputdeviceresponse.h"
#include "transferinputdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::TransferInputDeviceResponse
 * \brief The TransferInputDeviceResponse class provides an interace for MediaLive TransferInputDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::transferInputDevice
 */

/*!
 * Constructs a TransferInputDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
TransferInputDeviceResponse::TransferInputDeviceResponse(
        const TransferInputDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new TransferInputDeviceResponsePrivate(this), parent)
{
    setRequest(new TransferInputDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TransferInputDeviceRequest * TransferInputDeviceResponse::request() const
{
    Q_D(const TransferInputDeviceResponse);
    return static_cast<const TransferInputDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive TransferInputDevice \a response.
 */
void TransferInputDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TransferInputDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::TransferInputDeviceResponsePrivate
 * \brief The TransferInputDeviceResponsePrivate class provides private implementation for TransferInputDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a TransferInputDeviceResponsePrivate object with public implementation \a q.
 */
TransferInputDeviceResponsePrivate::TransferInputDeviceResponsePrivate(
    TransferInputDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive TransferInputDevice response element from \a xml.
 */
void TransferInputDeviceResponsePrivate::parseTransferInputDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransferInputDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
