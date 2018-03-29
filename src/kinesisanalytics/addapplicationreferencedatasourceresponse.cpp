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

#include "addapplicationreferencedatasourceresponse.h"
#include "addapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationReferenceDataSourceResponse
 *
 * @brief  Handles KinesisAnalytics AddApplicationReferenceDataSource responses.
 *
 * @see    KinesisAnalyticsClient::addApplicationReferenceDataSource
 */

/**
 * @brief  Constructs a new AddApplicationReferenceDataSourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationReferenceDataSourceResponse::AddApplicationReferenceDataSourceResponse(
        const AddApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new AddApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

const AddApplicationReferenceDataSourceRequest * AddApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const AddApplicationReferenceDataSourceResponse);
    return static_cast<const AddApplicationReferenceDataSourceRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics AddApplicationReferenceDataSource response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddApplicationReferenceDataSourceResponsePrivate
 *
 * @brief  Private implementation for AddApplicationReferenceDataSourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationReferenceDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationReferenceDataSourceResponse instance.
 */
AddApplicationReferenceDataSourceResponsePrivate::AddApplicationReferenceDataSourceResponsePrivate(
    AddApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics AddApplicationReferenceDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationReferenceDataSourceResponsePrivate::parseAddApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationReferenceDataSourceResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
