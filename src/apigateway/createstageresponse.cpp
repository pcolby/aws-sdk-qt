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

#include "createstageresponse.h"
#include "createstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateStageResponse
 *
 * \brief The CreateStageResponse class provides an interace for APIGateway CreateStage responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createStage
 */

/*!
 * @brief  Constructs a new CreateStageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStageResponse::CreateStageResponse(
        const CreateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateStageResponsePrivate(this), parent)
{
    setRequest(new CreateStageRequest(request));
    setReply(reply);
}

const CreateStageRequest * CreateStageResponse::request() const
{
    Q_D(const CreateStageResponse);
    return static_cast<const CreateStageRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway CreateStage response.
 *
 * @param  response  Response to parse.
 */
void CreateStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateStageResponsePrivate
 *
 * \brief Private implementation for CreateStageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStageResponse instance.
 */
CreateStageResponsePrivate::CreateStageResponsePrivate(
    CreateStageResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway CreateStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStageResponsePrivate::parseCreateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
