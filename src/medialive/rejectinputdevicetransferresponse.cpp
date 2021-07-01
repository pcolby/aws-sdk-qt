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

#include "rejectinputdevicetransferresponse.h"
#include "rejectinputdevicetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferResponse
 * \brief The RejectInputDeviceTransferResponse class provides an interace for MediaLive RejectInputDeviceTransfer responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rejectInputDeviceTransfer
 */

/*!
 * Constructs a RejectInputDeviceTransferResponse object for \a reply to \a request, with parent \a parent.
 */
RejectInputDeviceTransferResponse::RejectInputDeviceTransferResponse(
        const RejectInputDeviceTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new RejectInputDeviceTransferResponsePrivate(this), parent)
{
    setRequest(new RejectInputDeviceTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectInputDeviceTransferRequest * RejectInputDeviceTransferResponse::request() const
{
    Q_D(const RejectInputDeviceTransferResponse);
    return static_cast<const RejectInputDeviceTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive RejectInputDeviceTransfer \a response.
 */
void RejectInputDeviceTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectInputDeviceTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferResponsePrivate
 * \brief The RejectInputDeviceTransferResponsePrivate class provides private implementation for RejectInputDeviceTransferResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RejectInputDeviceTransferResponsePrivate object with public implementation \a q.
 */
RejectInputDeviceTransferResponsePrivate::RejectInputDeviceTransferResponsePrivate(
    RejectInputDeviceTransferResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive RejectInputDeviceTransfer response element from \a xml.
 */
void RejectInputDeviceTransferResponsePrivate::parseRejectInputDeviceTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectInputDeviceTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
