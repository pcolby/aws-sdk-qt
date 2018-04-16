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

#include "detachprincipalpolicyresponse.h"
#include "detachprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DetachPrincipalPolicyResponse
 *
 * \brief The DetachPrincipalPolicyResponse class encapsulates IoT DetachPrincipalPolicy responses.
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
 * \sa IoTClient::detachPrincipalPolicy
 */

/*!
 * @brief  Constructs a new DetachPrincipalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachPrincipalPolicyResponse::DetachPrincipalPolicyResponse(
        const DetachPrincipalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DetachPrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachPrincipalPolicyRequest(request));
    setReply(reply);
}

const DetachPrincipalPolicyRequest * DetachPrincipalPolicyResponse::request() const
{
    Q_D(const DetachPrincipalPolicyResponse);
    return static_cast<const DetachPrincipalPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT DetachPrincipalPolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachPrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachPrincipalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DetachPrincipalPolicyResponsePrivate
 *
 * \brief Private implementation for DetachPrincipalPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetachPrincipalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachPrincipalPolicyResponse instance.
 */
DetachPrincipalPolicyResponsePrivate::DetachPrincipalPolicyResponsePrivate(
    DetachPrincipalPolicyResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT DetachPrincipalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachPrincipalPolicyResponsePrivate::parseDetachPrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachPrincipalPolicyResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
