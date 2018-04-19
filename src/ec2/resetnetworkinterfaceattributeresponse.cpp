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

#include "resetnetworkinterfaceattributeresponse.h"
#include "resetnetworkinterfaceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetNetworkInterfaceAttributeResponse
 * \brief The ResetNetworkInterfaceAttributeResponse class provides an interace for EC2 ResetNetworkInterfaceAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::resetNetworkInterfaceAttribute
 */

/*!
 * Constructs a ResetNetworkInterfaceAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ResetNetworkInterfaceAttributeResponse::ResetNetworkInterfaceAttributeResponse(
        const ResetNetworkInterfaceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ResetNetworkInterfaceAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetNetworkInterfaceAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetNetworkInterfaceAttributeRequest * ResetNetworkInterfaceAttributeResponse::request() const
{
    Q_D(const ResetNetworkInterfaceAttributeResponse);
    return static_cast<const ResetNetworkInterfaceAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ResetNetworkInterfaceAttribute \a response.
 */
void ResetNetworkInterfaceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetNetworkInterfaceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ResetNetworkInterfaceAttributeResponsePrivate
 * \brief The ResetNetworkInterfaceAttributeResponsePrivate class provides private implementation for ResetNetworkInterfaceAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetNetworkInterfaceAttributeResponsePrivate object with public implementation \a q.
 */
ResetNetworkInterfaceAttributeResponsePrivate::ResetNetworkInterfaceAttributeResponsePrivate(
    ResetNetworkInterfaceAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ResetNetworkInterfaceAttribute response element from \a xml.
 */
void ResetNetworkInterfaceAttributeResponsePrivate::parseResetNetworkInterfaceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetNetworkInterfaceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
