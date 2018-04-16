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

#include "cancelcertificatetransferresponse.h"
#include "cancelcertificatetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CancelCertificateTransferResponse
 *
 * \brief The CancelCertificateTransferResponse class provides an interace for IoT CancelCertificateTransfer responses.
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
 * \sa IoTClient::cancelCertificateTransfer
 */

/*!
 * @brief  Constructs a new CancelCertificateTransferResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelCertificateTransferResponse::CancelCertificateTransferResponse(
        const CancelCertificateTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CancelCertificateTransferResponsePrivate(this), parent)
{
    setRequest(new CancelCertificateTransferRequest(request));
    setReply(reply);
}

const CancelCertificateTransferRequest * CancelCertificateTransferResponse::request() const
{
    Q_D(const CancelCertificateTransferResponse);
    return static_cast<const CancelCertificateTransferRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT CancelCertificateTransfer response.
 *
 * @param  response  Response to parse.
 */
void CancelCertificateTransferResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelCertificateTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CancelCertificateTransferResponsePrivate
 *
 * \brief Private implementation for CancelCertificateTransferResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CancelCertificateTransferResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelCertificateTransferResponse instance.
 */
CancelCertificateTransferResponsePrivate::CancelCertificateTransferResponsePrivate(
    CancelCertificateTransferResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT CancelCertificateTransferResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelCertificateTransferResponsePrivate::parseCancelCertificateTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelCertificateTransferResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
