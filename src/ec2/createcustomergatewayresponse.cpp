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

#include "createcustomergatewayresponse.h"
#include "createcustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateCustomerGatewayResponse
 *
 * \brief The CreateCustomerGatewayResponse class provides an interace for EC2 CreateCustomerGateway responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createCustomerGateway
 */

/*!
 * @brief  Constructs a new CreateCustomerGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCustomerGatewayResponse::CreateCustomerGatewayResponse(
        const CreateCustomerGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateCustomerGatewayRequest(request));
    setReply(reply);
}

const CreateCustomerGatewayRequest * CreateCustomerGatewayResponse::request() const
{
    Q_D(const CreateCustomerGatewayResponse);
    return static_cast<const CreateCustomerGatewayRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 CreateCustomerGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCustomerGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateCustomerGatewayResponsePrivate
 *
 * \brief Private implementation for CreateCustomerGatewayResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCustomerGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCustomerGatewayResponse instance.
 */
CreateCustomerGatewayResponsePrivate::CreateCustomerGatewayResponsePrivate(
    CreateCustomerGatewayResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 CreateCustomerGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCustomerGatewayResponsePrivate::parseCreateCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomerGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
