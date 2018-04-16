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

#include "cancelstepsresponse.h"
#include "cancelstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CancelStepsResponse
 *
 * \brief The CancelStepsResponse class provides an interace for EMR CancelSteps responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::cancelSteps
 */

/*!
 * @brief  Constructs a new CancelStepsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelStepsResponse::CancelStepsResponse(
        const CancelStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new CancelStepsResponsePrivate(this), parent)
{
    setRequest(new CancelStepsRequest(request));
    setReply(reply);
}

const CancelStepsRequest * CancelStepsResponse::request() const
{
    Q_D(const CancelStepsResponse);
    return static_cast<const CancelStepsRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR CancelSteps response.
 *
 * @param  response  Response to parse.
 */
void CancelStepsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CancelStepsResponsePrivate
 *
 * \brief Private implementation for CancelStepsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CancelStepsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelStepsResponse instance.
 */
CancelStepsResponsePrivate::CancelStepsResponsePrivate(
    CancelStepsResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR CancelStepsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelStepsResponsePrivate::parseCancelStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelStepsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
