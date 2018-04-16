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

#include "listauthorizersresponse.h"
#include "listauthorizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListAuthorizersResponse
 *
 * \brief The ListAuthorizersResponse class provides an interace for IoT ListAuthorizers responses.
 *
 * \ingroup IoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listAuthorizers
 */

/*!
 * @brief  Constructs a new ListAuthorizersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAuthorizersResponse::ListAuthorizersResponse(
        const ListAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListAuthorizersResponsePrivate(this), parent)
{
    setRequest(new ListAuthorizersRequest(request));
    setReply(reply);
}

const ListAuthorizersRequest * ListAuthorizersResponse::request() const
{
    Q_D(const ListAuthorizersResponse);
    return static_cast<const ListAuthorizersRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT ListAuthorizers response.
 *
 * @param  response  Response to parse.
 */
void ListAuthorizersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListAuthorizersResponsePrivate
 *
 * \brief Private implementation for ListAuthorizersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAuthorizersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAuthorizersResponse instance.
 */
ListAuthorizersResponsePrivate::ListAuthorizersResponsePrivate(
    ListAuthorizersResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT ListAuthorizersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAuthorizersResponsePrivate::parseListAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAuthorizersResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
