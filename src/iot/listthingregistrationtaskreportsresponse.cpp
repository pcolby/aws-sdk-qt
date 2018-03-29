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

#include "listthingregistrationtaskreportsresponse.h"
#include "listthingregistrationtaskreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingRegistrationTaskReportsResponse
 *
 * @brief  Handles IoT ListThingRegistrationTaskReports responses.
 *
 * @see    IoTClient::listThingRegistrationTaskReports
 */

/**
 * @brief  Constructs a new ListThingRegistrationTaskReportsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingRegistrationTaskReportsResponse::ListThingRegistrationTaskReportsResponse(
        const ListThingRegistrationTaskReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingRegistrationTaskReportsResponsePrivate(this), parent)
{
    setRequest(new ListThingRegistrationTaskReportsRequest(request));
    setReply(reply);
}

const ListThingRegistrationTaskReportsRequest * ListThingRegistrationTaskReportsResponse::request() const
{
    Q_D(const ListThingRegistrationTaskReportsResponse);
    return static_cast<const ListThingRegistrationTaskReportsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingRegistrationTaskReports response.
 *
 * @param  response  Response to parse.
 */
void ListThingRegistrationTaskReportsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingRegistrationTaskReportsResponsePrivate
 *
 * @brief  Private implementation for ListThingRegistrationTaskReportsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTaskReportsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingRegistrationTaskReportsResponse instance.
 */
ListThingRegistrationTaskReportsResponsePrivate::ListThingRegistrationTaskReportsResponsePrivate(
    ListThingRegistrationTaskReportsQueueResponse * const q) : ListThingRegistrationTaskReportsPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingRegistrationTaskReportsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingRegistrationTaskReportsResponsePrivate::ListThingRegistrationTaskReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingRegistrationTaskReportsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
