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

#include "createinvalidationresponse.h"
#include "createinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreateInvalidationResponse
 *
 * @brief  Handles CloudFront CreateInvalidation responses.
 *
 * @see    CloudFrontClient::createInvalidation
 */

/**
 * @brief  Constructs a new CreateInvalidationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInvalidationResponse::CreateInvalidationResponse(
        const CreateInvalidationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateInvalidationResponsePrivate(this), parent)
{
    setRequest(new CreateInvalidationRequest(request));
    setReply(reply);
}

const CreateInvalidationRequest * CreateInvalidationResponse::request() const
{
    Q_D(const CreateInvalidationResponse);
    return static_cast<const CreateInvalidationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateInvalidation response.
 *
 * @param  response  Response to parse.
 */
void CreateInvalidationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInvalidationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInvalidationResponsePrivate
 *
 * @brief  Private implementation for CreateInvalidationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInvalidationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInvalidationResponse instance.
 */
CreateInvalidationResponsePrivate::CreateInvalidationResponsePrivate(
    CreateInvalidationResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateInvalidationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInvalidationResponsePrivate::parseCreateInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInvalidationResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
