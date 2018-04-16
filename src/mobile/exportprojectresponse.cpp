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

#include "exportprojectresponse.h"
#include "exportprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportProjectResponse
 *
 * \brief The ExportProjectResponse class encapsulates Mobile ExportProject responses.
 *
 * \ingroup Mobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportProject
 */

/*!
 * @brief  Constructs a new ExportProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportProjectResponse::ExportProjectResponse(
        const ExportProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportProjectResponsePrivate(this), parent)
{
    setRequest(new ExportProjectRequest(request));
    setReply(reply);
}

const ExportProjectRequest * ExportProjectResponse::request() const
{
    Q_D(const ExportProjectResponse);
    return static_cast<const ExportProjectRequest *>(d->request);
}

/*!
 * @brief  Parse a Mobile ExportProject response.
 *
 * @param  response  Response to parse.
 */
void ExportProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExportProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ExportProjectResponsePrivate
 *
 * \brief Private implementation for ExportProjectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExportProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportProjectResponse instance.
 */
ExportProjectResponsePrivate::ExportProjectResponsePrivate(
    ExportProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Mobile ExportProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportProjectResponsePrivate::parseExportProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportProjectResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
