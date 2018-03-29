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

#include "cancelimporttaskresponse.h"
#include "cancelimporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  CancelImportTaskResponse
 *
 * @brief  Handles EC2 CancelImportTask responses.
 *
 * @see    EC2Client::cancelImportTask
 */

/**
 * @brief  Constructs a new CancelImportTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelImportTaskResponse::CancelImportTaskResponse(
        const CancelImportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelImportTaskResponsePrivate(this), parent)
{
    setRequest(new CancelImportTaskRequest(request));
    setReply(reply);
}

const CancelImportTaskRequest * CancelImportTaskResponse::request() const
{
    Q_D(const CancelImportTaskResponse);
    return static_cast<const CancelImportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelImportTask response.
 *
 * @param  response  Response to parse.
 */
void CancelImportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelImportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelImportTaskResponsePrivate
 *
 * @brief  Private implementation for CancelImportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelImportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelImportTaskResponse instance.
 */
CancelImportTaskResponsePrivate::CancelImportTaskResponsePrivate(
    CancelImportTaskResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelImportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelImportTaskResponsePrivate::parseCancelImportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelImportTaskResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
