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

#include "registercrossaccountaccessroleresponse.h"
#include "registercrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleResponse
 *
 * \brief The RegisterCrossAccountAccessRoleResponse class encapsulates Inspector RegisterCrossAccountAccessRole responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::registerCrossAccountAccessRole
 */

/*!
 * @brief  Constructs a new RegisterCrossAccountAccessRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterCrossAccountAccessRoleResponse::RegisterCrossAccountAccessRoleResponse(
        const RegisterCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new RegisterCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new RegisterCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

const RegisterCrossAccountAccessRoleRequest * RegisterCrossAccountAccessRoleResponse::request() const
{
    Q_D(const RegisterCrossAccountAccessRoleResponse);
    return static_cast<const RegisterCrossAccountAccessRoleRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector RegisterCrossAccountAccessRole response.
 *
 * @param  response  Response to parse.
 */
void RegisterCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterCrossAccountAccessRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RegisterCrossAccountAccessRoleResponsePrivate
 *
 * \brief Private implementation for RegisterCrossAccountAccessRoleResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RegisterCrossAccountAccessRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterCrossAccountAccessRoleResponse instance.
 */
RegisterCrossAccountAccessRoleResponsePrivate::RegisterCrossAccountAccessRoleResponsePrivate(
    RegisterCrossAccountAccessRoleResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector RegisterCrossAccountAccessRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterCrossAccountAccessRoleResponsePrivate::parseRegisterCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCrossAccountAccessRoleResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
