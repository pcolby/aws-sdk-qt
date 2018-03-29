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

#include "deleteconfigurationrecorderresponse.h"
#include "deleteconfigurationrecorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteConfigurationRecorderResponse
 *
 * @brief  Handles ConfigService DeleteConfigurationRecorder responses.
 *
 * @see    ConfigServiceClient::deleteConfigurationRecorder
 */

/**
 * @brief  Constructs a new DeleteConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationRecorderResponse::DeleteConfigurationRecorderResponse(
        const DeleteConfigurationRecorderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteConfigurationRecorderResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationRecorderRequest(request));
    setReply(reply);
}

const DeleteConfigurationRecorderRequest * DeleteConfigurationRecorderResponse::request() const
{
    Q_D(const DeleteConfigurationRecorderResponse);
    return static_cast<const DeleteConfigurationRecorderRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteConfigurationRecorder response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationRecorderResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigurationRecorderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationRecorderResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationRecorderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationRecorderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationRecorderResponse instance.
 */
DeleteConfigurationRecorderResponsePrivate::DeleteConfigurationRecorderResponsePrivate(
    DeleteConfigurationRecorderResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteConfigurationRecorderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationRecorderResponsePrivate::DeleteConfigurationRecorderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationRecorderResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
