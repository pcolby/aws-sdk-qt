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

#include "listcreateaccountstatusresponse.h"
#include "listcreateaccountstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListCreateAccountStatusResponse
 *
 * @brief  Handles Organizations ListCreateAccountStatus responses.
 *
 * @see    OrganizationsClient::listCreateAccountStatus
 */

/**
 * @brief  Constructs a new ListCreateAccountStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCreateAccountStatusResponse::ListCreateAccountStatusResponse(
        const ListCreateAccountStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListCreateAccountStatusResponsePrivate(this), parent)
{
    setRequest(new ListCreateAccountStatusRequest(request));
    setReply(reply);
}

const ListCreateAccountStatusRequest * ListCreateAccountStatusResponse::request() const
{
    Q_D(const ListCreateAccountStatusResponse);
    return static_cast<const ListCreateAccountStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListCreateAccountStatus response.
 *
 * @param  response  Response to parse.
 */
void ListCreateAccountStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCreateAccountStatusResponsePrivate
 *
 * @brief  Private implementation for ListCreateAccountStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCreateAccountStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCreateAccountStatusResponse instance.
 */
ListCreateAccountStatusResponsePrivate::ListCreateAccountStatusResponsePrivate(
    ListCreateAccountStatusResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListCreateAccountStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCreateAccountStatusResponsePrivate::ListCreateAccountStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCreateAccountStatusResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
