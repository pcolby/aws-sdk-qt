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

#include "createcomputerresponse.h"
#include "createcomputerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  CreateComputerResponse
 *
 * @brief  Handles DirectoryService CreateComputer responses.
 *
 * @see    DirectoryServiceClient::createComputer
 */

/**
 * @brief  Constructs a new CreateComputerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateComputerResponse::CreateComputerResponse(
        const CreateComputerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateComputerResponse(new CreateComputerResponsePrivate(this), parent)
{
    setRequest(new CreateComputerRequest(request));
    setReply(reply);
}

const CreateComputerRequest * CreateComputerResponse::request() const
{
    Q_D(const CreateComputerResponse);
    return static_cast<const CreateComputerRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateComputer response.
 *
 * @param  response  Response to parse.
 */
void CreateComputerResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateComputerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateComputerResponsePrivate
 *
 * @brief  Private implementation for CreateComputerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateComputerResponse instance.
 */
CreateComputerResponsePrivate::CreateComputerResponsePrivate(
    CreateComputerResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateComputerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateComputerResponsePrivate::parseCreateComputerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComputerResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
