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

#include "registerapplicationrevisionresponse.h"
#include "registerapplicationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  RegisterApplicationRevisionResponse
 *
 * @brief  Handles CodeDeploy RegisterApplicationRevision responses.
 *
 * @see    CodeDeployClient::registerApplicationRevision
 */

/**
 * @brief  Constructs a new RegisterApplicationRevisionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterApplicationRevisionResponse::RegisterApplicationRevisionResponse(
        const RegisterApplicationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new RegisterApplicationRevisionResponsePrivate(this), parent)
{
    setRequest(new RegisterApplicationRevisionRequest(request));
    setReply(reply);
}

const RegisterApplicationRevisionRequest * RegisterApplicationRevisionResponse::request() const
{
    Q_D(const RegisterApplicationRevisionResponse);
    return static_cast<const RegisterApplicationRevisionRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy RegisterApplicationRevision response.
 *
 * @param  response  Response to parse.
 */
void RegisterApplicationRevisionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterApplicationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterApplicationRevisionResponsePrivate
 *
 * @brief  Private implementation for RegisterApplicationRevisionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterApplicationRevisionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterApplicationRevisionResponse instance.
 */
RegisterApplicationRevisionResponsePrivate::RegisterApplicationRevisionResponsePrivate(
    RegisterApplicationRevisionResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy RegisterApplicationRevisionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterApplicationRevisionResponsePrivate::parseRegisterApplicationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterApplicationRevisionResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
