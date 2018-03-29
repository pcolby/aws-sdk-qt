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

#include "cancelexporttaskresponse.h"
#include "cancelexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CancelExportTaskResponse
 *
 * @brief  Handles EC2 CancelExportTask responses.
 *
 * @see    EC2Client::cancelExportTask
 */

/**
 * @brief  Constructs a new CancelExportTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelExportTaskResponse::CancelExportTaskResponse(
        const CancelExportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelExportTaskResponsePrivate(this), parent)
{
    setRequest(new CancelExportTaskRequest(request));
    setReply(reply);
}

const CancelExportTaskRequest * CancelExportTaskResponse::request() const
{
    Q_D(const CancelExportTaskResponse);
    return static_cast<const CancelExportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelExportTask response.
 *
 * @param  response  Response to parse.
 */
void CancelExportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelExportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelExportTaskResponsePrivate
 *
 * @brief  Private implementation for CancelExportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelExportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelExportTaskResponse instance.
 */
CancelExportTaskResponsePrivate::CancelExportTaskResponsePrivate(
    CancelExportTaskResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelExportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelExportTaskResponsePrivate::CancelExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelExportTaskResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
