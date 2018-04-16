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

#include "getpolicyversionresponse.h"
#include "getpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetPolicyVersionResponse
 *
 * \brief The GetPolicyVersionResponse class encapsulates IoT GetPolicyVersion responses.
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
 * \sa IoTClient::getPolicyVersion
 */

/*!
 * @brief  Constructs a new GetPolicyVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPolicyVersionResponse::GetPolicyVersionResponse(
        const GetPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new GetPolicyVersionRequest(request));
    setReply(reply);
}

const GetPolicyVersionRequest * GetPolicyVersionResponse::request() const
{
    Q_D(const GetPolicyVersionResponse);
    return static_cast<const GetPolicyVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT GetPolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void GetPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetPolicyVersionResponsePrivate
 *
 * \brief Private implementation for GetPolicyVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPolicyVersionResponse instance.
 */
GetPolicyVersionResponsePrivate::GetPolicyVersionResponsePrivate(
    GetPolicyVersionResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT GetPolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPolicyVersionResponsePrivate::parseGetPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyVersionResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
