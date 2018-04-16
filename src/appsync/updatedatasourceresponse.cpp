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

#include "updatedatasourceresponse.h"
#include "updatedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDataSourceResponse
 *
 * \brief The UpdateDataSourceResponse class encapsulates AppSync UpdateDataSource responses.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDataSource
 */

/*!
 * @brief  Constructs a new UpdateDataSourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDataSourceResponse::UpdateDataSourceResponse(
        const UpdateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateDataSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSourceRequest(request));
    setReply(reply);
}

const UpdateDataSourceRequest * UpdateDataSourceResponse::request() const
{
    Q_D(const UpdateDataSourceResponse);
    return static_cast<const UpdateDataSourceRequest *>(d->request);
}

/*!
 * @brief  Parse a AppSync UpdateDataSource response.
 *
 * @param  response  Response to parse.
 */
void UpdateDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateDataSourceResponsePrivate
 *
 * \brief Private implementation for UpdateDataSourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDataSourceResponse instance.
 */
UpdateDataSourceResponsePrivate::UpdateDataSourceResponsePrivate(
    UpdateDataSourceResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppSync UpdateDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDataSourceResponsePrivate::parseUpdateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSourceResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
