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

#include "deletenatgatewayresponse.h"
#include "deletenatgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNatGatewayResponse
 * \brief The DeleteNatGatewayResponse class provides an interace for EC2 DeleteNatGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteNatGateway
 */

/*!
 * Constructs a DeleteNatGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNatGatewayResponse::DeleteNatGatewayResponse(
        const DeleteNatGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteNatGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteNatGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNatGatewayRequest * DeleteNatGatewayResponse::request() const
{
    Q_D(const DeleteNatGatewayResponse);
    return static_cast<const DeleteNatGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteNatGateway \a response.
 */
void DeleteNatGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNatGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteNatGatewayResponsePrivate
 * \brief The DeleteNatGatewayResponsePrivate class provides private implementation for DeleteNatGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteNatGatewayResponsePrivate object with public implementation \a q.
 */
DeleteNatGatewayResponsePrivate::DeleteNatGatewayResponsePrivate(
    DeleteNatGatewayResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteNatGateway response element from \a xml.
 */
void DeleteNatGatewayResponsePrivate::parseDeleteNatGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNatGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
