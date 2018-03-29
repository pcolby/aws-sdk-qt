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

#include "registertoworkmailresponse.h"
#include "registertoworkmailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  RegisterToWorkMailResponse
 *
 * @brief  Handles WorkMail RegisterToWorkMail responses.
 *
 * @see    WorkMailClient::registerToWorkMail
 */

/**
 * @brief  Constructs a new RegisterToWorkMailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterToWorkMailResponse::RegisterToWorkMailResponse(
        const RegisterToWorkMailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new RegisterToWorkMailResponsePrivate(this), parent)
{
    setRequest(new RegisterToWorkMailRequest(request));
    setReply(reply);
}

const RegisterToWorkMailRequest * RegisterToWorkMailResponse::request() const
{
    Q_D(const RegisterToWorkMailResponse);
    return static_cast<const RegisterToWorkMailRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail RegisterToWorkMail response.
 *
 * @param  response  Response to parse.
 */
void RegisterToWorkMailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterToWorkMailResponsePrivate
 *
 * @brief  Private implementation for RegisterToWorkMailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterToWorkMailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterToWorkMailResponse instance.
 */
RegisterToWorkMailResponsePrivate::RegisterToWorkMailResponsePrivate(
    RegisterToWorkMailQueueResponse * const q) : RegisterToWorkMailPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail RegisterToWorkMailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterToWorkMailResponsePrivate::RegisterToWorkMailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterToWorkMailResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
