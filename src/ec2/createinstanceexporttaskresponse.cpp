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

#include "createinstanceexporttaskresponse.h"
#include "createinstanceexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateInstanceExportTaskResponse
 *
 * @brief  Handles EC2 CreateInstanceExportTask responses.
 *
 * @see    EC2Client::createInstanceExportTask
 */

/**
 * @brief  Constructs a new CreateInstanceExportTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceExportTaskResponse::CreateInstanceExportTaskResponse(
        const CreateInstanceExportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateInstanceExportTaskResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceExportTaskRequest(request));
    setReply(reply);
}

const CreateInstanceExportTaskRequest * CreateInstanceExportTaskResponse::request() const
{
    Q_D(const CreateInstanceExportTaskResponse);
    return static_cast<const CreateInstanceExportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateInstanceExportTask response.
 *
 * @param  response  Response to parse.
 */
void CreateInstanceExportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInstanceExportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstanceExportTaskResponsePrivate
 *
 * @brief  Private implementation for CreateInstanceExportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceExportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstanceExportTaskResponse instance.
 */
CreateInstanceExportTaskResponsePrivate::CreateInstanceExportTaskResponsePrivate(
    CreateInstanceExportTaskResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateInstanceExportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstanceExportTaskResponsePrivate::CreateInstanceExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceExportTaskResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
