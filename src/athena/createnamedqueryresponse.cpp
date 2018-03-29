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

#include "createnamedqueryresponse.h"
#include "createnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/**
 * @class  CreateNamedQueryResponse
 *
 * @brief  Handles Athena CreateNamedQuery responses.
 *
 * @see    AthenaClient::createNamedQuery
 */

/**
 * @brief  Constructs a new CreateNamedQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNamedQueryResponse::CreateNamedQueryResponse(
        const CreateNamedQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new CreateNamedQueryResponsePrivate(this), parent)
{
    setRequest(new CreateNamedQueryRequest(request));
    setReply(reply);
}

const CreateNamedQueryRequest * CreateNamedQueryResponse::request() const
{
    Q_D(const CreateNamedQueryResponse);
    return static_cast<const CreateNamedQueryRequest *>(d->request);
}

/**
 * @brief  Parse a Athena CreateNamedQuery response.
 *
 * @param  response  Response to parse.
 */
void CreateNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNamedQueryResponsePrivate
 *
 * @brief  Private implementation for CreateNamedQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNamedQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNamedQueryResponse instance.
 */
CreateNamedQueryResponsePrivate::CreateNamedQueryResponsePrivate(
    CreateNamedQueryQueueResponse * const q) : CreateNamedQueryPrivate(q)
{

}

/**
 * @brief  Parse an Athena CreateNamedQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNamedQueryResponsePrivate::CreateNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNamedQueryResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
