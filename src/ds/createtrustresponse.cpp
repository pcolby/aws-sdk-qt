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

#include "createtrustresponse.h"
#include "createtrustresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  CreateTrustResponse
 *
 * @brief  Handles DirectoryService CreateTrust responses.
 *
 * @see    DirectoryServiceClient::createTrust
 */

/**
 * @brief  Constructs a new CreateTrustResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrustResponse::CreateTrustResponse(
        const CreateTrustRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateTrustResponse(new CreateTrustResponsePrivate(this), parent)
{
    setRequest(new CreateTrustRequest(request));
    setReply(reply);
}

const CreateTrustRequest * CreateTrustResponse::request() const
{
    Q_D(const CreateTrustResponse);
    return static_cast<const CreateTrustRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateTrust response.
 *
 * @param  response  Response to parse.
 */
void CreateTrustResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrustResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrustResponsePrivate
 *
 * @brief  Private implementation for CreateTrustResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrustResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrustResponse instance.
 */
CreateTrustResponsePrivate::CreateTrustResponsePrivate(
    CreateTrustResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateTrustResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrustResponsePrivate::parseCreateTrustResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrustResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
