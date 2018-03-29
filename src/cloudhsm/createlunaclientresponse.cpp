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

#include "createlunaclientresponse.h"
#include "createlunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  CreateLunaClientResponse
 *
 * @brief  Handles CloudHSM CreateLunaClient responses.
 *
 * @see    CloudHSMClient::createLunaClient
 */

/**
 * @brief  Constructs a new CreateLunaClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLunaClientResponse::CreateLunaClientResponse(
        const CreateLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateLunaClientResponse(new CreateLunaClientResponsePrivate(this), parent)
{
    setRequest(new CreateLunaClientRequest(request));
    setReply(reply);
}

const CreateLunaClientRequest * CreateLunaClientResponse::request() const
{
    Q_D(const CreateLunaClientResponse);
    return static_cast<const CreateLunaClientRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM CreateLunaClient response.
 *
 * @param  response  Response to parse.
 */
void CreateLunaClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLunaClientResponsePrivate
 *
 * @brief  Private implementation for CreateLunaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLunaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLunaClientResponse instance.
 */
CreateLunaClientResponsePrivate::CreateLunaClientResponsePrivate(
    CreateLunaClientResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM CreateLunaClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLunaClientResponsePrivate::parseCreateLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLunaClientResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
