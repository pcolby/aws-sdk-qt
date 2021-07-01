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

#include "acceptinputdevicetransferresponse.h"
#include "acceptinputdevicetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::AcceptInputDeviceTransferResponse
 * \brief The AcceptInputDeviceTransferResponse class provides an interace for MediaLive AcceptInputDeviceTransfer responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::acceptInputDeviceTransfer
 */

/*!
 * Constructs a AcceptInputDeviceTransferResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptInputDeviceTransferResponse::AcceptInputDeviceTransferResponse(
        const AcceptInputDeviceTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new AcceptInputDeviceTransferResponsePrivate(this), parent)
{
    setRequest(new AcceptInputDeviceTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptInputDeviceTransferRequest * AcceptInputDeviceTransferResponse::request() const
{
    Q_D(const AcceptInputDeviceTransferResponse);
    return static_cast<const AcceptInputDeviceTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive AcceptInputDeviceTransfer \a response.
 */
void AcceptInputDeviceTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptInputDeviceTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::AcceptInputDeviceTransferResponsePrivate
 * \brief The AcceptInputDeviceTransferResponsePrivate class provides private implementation for AcceptInputDeviceTransferResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a AcceptInputDeviceTransferResponsePrivate object with public implementation \a q.
 */
AcceptInputDeviceTransferResponsePrivate::AcceptInputDeviceTransferResponsePrivate(
    AcceptInputDeviceTransferResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive AcceptInputDeviceTransfer response element from \a xml.
 */
void AcceptInputDeviceTransferResponsePrivate::parseAcceptInputDeviceTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInputDeviceTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
