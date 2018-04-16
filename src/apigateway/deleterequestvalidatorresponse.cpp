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

#include "deleterequestvalidatorresponse.h"
#include "deleterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorResponse
 *
 * \brief The DeleteRequestValidatorResponse class provides an interace for APIGateway DeleteRequestValidator responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRequestValidator
 */

/*!
 * @brief  Constructs a new DeleteRequestValidatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRequestValidatorResponse::DeleteRequestValidatorResponse(
        const DeleteRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRequestValidatorRequest(request));
    setReply(reply);
}

const DeleteRequestValidatorRequest * DeleteRequestValidatorResponse::request() const
{
    Q_D(const DeleteRequestValidatorResponse);
    return static_cast<const DeleteRequestValidatorRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway DeleteRequestValidator response.
 *
 * @param  response  Response to parse.
 */
void DeleteRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteRequestValidatorResponsePrivate
 *
 * \brief Private implementation for DeleteRequestValidatorResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRequestValidatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRequestValidatorResponse instance.
 */
DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponsePrivate(
    DeleteRequestValidatorResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway DeleteRequestValidatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRequestValidatorResponsePrivate::parseDeleteRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRequestValidatorResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
