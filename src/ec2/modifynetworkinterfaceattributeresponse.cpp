/*
    Copyright 2013-2018 Paul Colby

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

#include "modifynetworkinterfaceattributeresponse.h"
#include "modifynetworkinterfaceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyNetworkInterfaceAttributeResponse
 * \brief The ModifyNetworkInterfaceAttributeResponse class provides an interace for EC2 ModifyNetworkInterfaceAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyNetworkInterfaceAttribute
 */

/*!
 * Constructs a ModifyNetworkInterfaceAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyNetworkInterfaceAttributeResponse::ModifyNetworkInterfaceAttributeResponse(
        const ModifyNetworkInterfaceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyNetworkInterfaceAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyNetworkInterfaceAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyNetworkInterfaceAttributeRequest * ModifyNetworkInterfaceAttributeResponse::request() const
{
    Q_D(const ModifyNetworkInterfaceAttributeResponse);
    return static_cast<const ModifyNetworkInterfaceAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyNetworkInterfaceAttribute \a response.
 */
void ModifyNetworkInterfaceAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyNetworkInterfaceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyNetworkInterfaceAttributeResponsePrivate
 * \brief The ModifyNetworkInterfaceAttributeResponsePrivate class provides private implementation for ModifyNetworkInterfaceAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyNetworkInterfaceAttributeResponsePrivate object with public implementation \a q.
 */
ModifyNetworkInterfaceAttributeResponsePrivate::ModifyNetworkInterfaceAttributeResponsePrivate(
    ModifyNetworkInterfaceAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyNetworkInterfaceAttribute response element from \a xml.
 */
void ModifyNetworkInterfaceAttributeResponsePrivate::parseModifyNetworkInterfaceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyNetworkInterfaceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
