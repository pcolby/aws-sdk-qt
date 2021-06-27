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

#include "updatepartneraccountresponse.h"
#include "updatepartneraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountResponse
 * \brief The UpdatePartnerAccountResponse class provides an interace for IoTWireless UpdatePartnerAccount responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updatePartnerAccount
 */

/*!
 * Constructs a UpdatePartnerAccountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePartnerAccountResponse::UpdatePartnerAccountResponse(
        const UpdatePartnerAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdatePartnerAccountResponsePrivate(this), parent)
{
    setRequest(new UpdatePartnerAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePartnerAccountRequest * UpdatePartnerAccountResponse::request() const
{
    return static_cast<const UpdatePartnerAccountRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdatePartnerAccount \a response.
 */
void UpdatePartnerAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePartnerAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountResponsePrivate
 * \brief The UpdatePartnerAccountResponsePrivate class provides private implementation for UpdatePartnerAccountResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdatePartnerAccountResponsePrivate object with public implementation \a q.
 */
UpdatePartnerAccountResponsePrivate::UpdatePartnerAccountResponsePrivate(
    UpdatePartnerAccountResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdatePartnerAccount response element from \a xml.
 */
void UpdatePartnerAccountResponsePrivate::parseUpdatePartnerAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePartnerAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
