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

#include "cancelinputdevicetransferresponse.h"
#include "cancelinputdevicetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferResponse
 * \brief The CancelInputDeviceTransferResponse class provides an interace for MediaLive CancelInputDeviceTransfer responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::cancelInputDeviceTransfer
 */

/*!
 * Constructs a CancelInputDeviceTransferResponse object for \a reply to \a request, with parent \a parent.
 */
CancelInputDeviceTransferResponse::CancelInputDeviceTransferResponse(
        const CancelInputDeviceTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CancelInputDeviceTransferResponsePrivate(this), parent)
{
    setRequest(new CancelInputDeviceTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelInputDeviceTransferRequest * CancelInputDeviceTransferResponse::request() const
{
    return static_cast<const CancelInputDeviceTransferRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive CancelInputDeviceTransfer \a response.
 */
void CancelInputDeviceTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelInputDeviceTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferResponsePrivate
 * \brief The CancelInputDeviceTransferResponsePrivate class provides private implementation for CancelInputDeviceTransferResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CancelInputDeviceTransferResponsePrivate object with public implementation \a q.
 */
CancelInputDeviceTransferResponsePrivate::CancelInputDeviceTransferResponsePrivate(
    CancelInputDeviceTransferResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CancelInputDeviceTransfer response element from \a xml.
 */
void CancelInputDeviceTransferResponsePrivate::parseCancelInputDeviceTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelInputDeviceTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
