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

#include "deletemethodresponseresponse.h"
#include "deletemethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseResponse
 *
 * \brief The DeleteMethodResponseResponse class encapsulates APIGateway DeleteMethodResponse responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteMethodResponse
 */

/*!
 * @brief  Constructs a new DeleteMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMethodResponseResponse::DeleteMethodResponseResponse(
        const DeleteMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteMethodResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteMethodResponseRequest(request));
    setReply(reply);
}

const DeleteMethodResponseRequest * DeleteMethodResponseResponse::request() const
{
    Q_D(const DeleteMethodResponseResponse);
    return static_cast<const DeleteMethodResponseRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway DeleteMethodResponse response.
 *
 * @param  response  Response to parse.
 */
void DeleteMethodResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteMethodResponseResponsePrivate
 *
 * \brief Private implementation for DeleteMethodResponseResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteMethodResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMethodResponseResponse instance.
 */
DeleteMethodResponseResponsePrivate::DeleteMethodResponseResponsePrivate(
    DeleteMethodResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway DeleteMethodResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMethodResponseResponsePrivate::parseDeleteMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
