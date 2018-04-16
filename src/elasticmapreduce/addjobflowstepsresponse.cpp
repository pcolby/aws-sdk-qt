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

#include "addjobflowstepsresponse.h"
#include "addjobflowstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddJobFlowStepsResponse
 *
 * \brief The AddJobFlowStepsResponse class provides an interace for EMR AddJobFlowSteps responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::addJobFlowSteps
 */

/*!
 * @brief  Constructs a new AddJobFlowStepsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddJobFlowStepsResponse::AddJobFlowStepsResponse(
        const AddJobFlowStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new AddJobFlowStepsResponsePrivate(this), parent)
{
    setRequest(new AddJobFlowStepsRequest(request));
    setReply(reply);
}

const AddJobFlowStepsRequest * AddJobFlowStepsResponse::request() const
{
    Q_D(const AddJobFlowStepsResponse);
    return static_cast<const AddJobFlowStepsRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR AddJobFlowSteps response.
 *
 * @param  response  Response to parse.
 */
void AddJobFlowStepsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddJobFlowStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AddJobFlowStepsResponsePrivate
 *
 * \brief Private implementation for AddJobFlowStepsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddJobFlowStepsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddJobFlowStepsResponse instance.
 */
AddJobFlowStepsResponsePrivate::AddJobFlowStepsResponsePrivate(
    AddJobFlowStepsResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR AddJobFlowStepsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddJobFlowStepsResponsePrivate::parseAddJobFlowStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddJobFlowStepsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
