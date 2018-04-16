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

#include "updateprojectresponse.h"
#include "updateprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::UpdateProjectResponse
 *
 * \brief The UpdateProjectResponse class provides an interace for Mobile UpdateProject responses.
 *
 * \ingroup Mobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::updateProject
 */

/*!
 * @brief  Constructs a new UpdateProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProjectResponse::UpdateProjectResponse(
        const UpdateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new UpdateProjectResponsePrivate(this), parent)
{
    setRequest(new UpdateProjectRequest(request));
    setReply(reply);
}

const UpdateProjectRequest * UpdateProjectResponse::request() const
{
    Q_D(const UpdateProjectResponse);
    return static_cast<const UpdateProjectRequest *>(d->request);
}

/*!
 * @brief  Parse a Mobile UpdateProject response.
 *
 * @param  response  Response to parse.
 */
void UpdateProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateProjectResponsePrivate
 *
 * \brief Private implementation for UpdateProjectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateProjectResponse instance.
 */
UpdateProjectResponsePrivate::UpdateProjectResponsePrivate(
    UpdateProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Mobile UpdateProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateProjectResponsePrivate::parseUpdateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProjectResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
