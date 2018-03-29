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

#include "describemigrationtaskresponse.h"
#include "describemigrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  DescribeMigrationTaskResponse
 *
 * @brief  Handles MigrationHub DescribeMigrationTask responses.
 *
 * @see    MigrationHubClient::describeMigrationTask
 */

/**
 * @brief  Constructs a new DescribeMigrationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMigrationTaskResponse::DescribeMigrationTaskResponse(
        const DescribeMigrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DescribeMigrationTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeMigrationTaskRequest(request));
    setReply(reply);
}

const DescribeMigrationTaskRequest * DescribeMigrationTaskResponse::request() const
{
    Q_D(const DescribeMigrationTaskResponse);
    return static_cast<const DescribeMigrationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub DescribeMigrationTask response.
 *
 * @param  response  Response to parse.
 */
void DescribeMigrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMigrationTaskResponsePrivate
 *
 * @brief  Private implementation for DescribeMigrationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMigrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMigrationTaskResponse instance.
 */
DescribeMigrationTaskResponsePrivate::DescribeMigrationTaskResponsePrivate(
    DescribeMigrationTaskQueueResponse * const q) : DescribeMigrationTaskPrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub DescribeMigrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMigrationTaskResponsePrivate::DescribeMigrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMigrationTaskResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
