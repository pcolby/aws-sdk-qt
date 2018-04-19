/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateconnectivityinforesponse.h"
#include "updateconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoResponse
 * \brief The UpdateConnectivityInfoResponse class provides an interace for Greengrass UpdateConnectivityInfo responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateConnectivityInfo
 */

/*!
 * Constructs a UpdateConnectivityInfoResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectivityInfoResponse::UpdateConnectivityInfoResponse(
        const UpdateConnectivityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectivityInfoRequest * UpdateConnectivityInfoResponse::request() const
{
    Q_D(const UpdateConnectivityInfoResponse);
    return static_cast<const UpdateConnectivityInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateConnectivityInfo \a response.
 */
void UpdateConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConnectivityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoResponsePrivate
 * \brief The UpdateConnectivityInfoResponsePrivate class provides private implementation for UpdateConnectivityInfoResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectivityInfoResponsePrivate object with public implementation \a q.
 */
UpdateConnectivityInfoResponsePrivate::UpdateConnectivityInfoResponsePrivate(
    UpdateConnectivityInfoResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateConnectivityInfo response element from \a xml.
 */
void UpdateConnectivityInfoResponsePrivate::parseUpdateConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityInfoResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
