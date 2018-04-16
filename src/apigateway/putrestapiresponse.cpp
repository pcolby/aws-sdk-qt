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

#include "putrestapiresponse.h"
#include "putrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutRestApiResponse
 *
 * \brief The PutRestApiResponse class provides an interace for APIGateway PutRestApi responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putRestApi
 */

/*!
 * @brief  Constructs a new PutRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRestApiResponse::PutRestApiResponse(
        const PutRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutRestApiResponsePrivate(this), parent)
{
    setRequest(new PutRestApiRequest(request));
    setReply(reply);
}

const PutRestApiRequest * PutRestApiResponse::request() const
{
    Q_D(const PutRestApiResponse);
    return static_cast<const PutRestApiRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway PutRestApi response.
 *
 * @param  response  Response to parse.
 */
void PutRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutRestApiResponsePrivate
 *
 * \brief Private implementation for PutRestApiResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRestApiResponse instance.
 */
PutRestApiResponsePrivate::PutRestApiResponsePrivate(
    PutRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway PutRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRestApiResponsePrivate::parsePutRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
