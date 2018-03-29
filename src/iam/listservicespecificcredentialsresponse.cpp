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

#include "listservicespecificcredentialsresponse.h"
#include "listservicespecificcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListServiceSpecificCredentialsResponse
 *
 * @brief  Handles IAM ListServiceSpecificCredentials responses.
 *
 * @see    IAMClient::listServiceSpecificCredentials
 */

/**
 * @brief  Constructs a new ListServiceSpecificCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListServiceSpecificCredentialsResponse::ListServiceSpecificCredentialsResponse(
        const ListServiceSpecificCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListServiceSpecificCredentialsResponsePrivate(this), parent)
{
    setRequest(new ListServiceSpecificCredentialsRequest(request));
    setReply(reply);
}

const ListServiceSpecificCredentialsRequest * ListServiceSpecificCredentialsResponse::request() const
{
    Q_D(const ListServiceSpecificCredentialsResponse);
    return static_cast<const ListServiceSpecificCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListServiceSpecificCredentials response.
 *
 * @param  response  Response to parse.
 */
void ListServiceSpecificCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListServiceSpecificCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListServiceSpecificCredentialsResponsePrivate
 *
 * @brief  Private implementation for ListServiceSpecificCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServiceSpecificCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListServiceSpecificCredentialsResponse instance.
 */
ListServiceSpecificCredentialsResponsePrivate::ListServiceSpecificCredentialsResponsePrivate(
    ListServiceSpecificCredentialsResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListServiceSpecificCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListServiceSpecificCredentialsResponsePrivate::parseListServiceSpecificCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceSpecificCredentialsResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
