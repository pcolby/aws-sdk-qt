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

#include "deletelaunchtemplateresponse.h"
#include "deletelaunchtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteLaunchTemplateResponse
 *
 * \brief The DeleteLaunchTemplateResponse class encapsulates EC2 DeleteLaunchTemplate responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteLaunchTemplate
 */

/*!
 * @brief  Constructs a new DeleteLaunchTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLaunchTemplateResponse::DeleteLaunchTemplateResponse(
        const DeleteLaunchTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteLaunchTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchTemplateRequest(request));
    setReply(reply);
}

const DeleteLaunchTemplateRequest * DeleteLaunchTemplateResponse::request() const
{
    Q_D(const DeleteLaunchTemplateResponse);
    return static_cast<const DeleteLaunchTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DeleteLaunchTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteLaunchTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLaunchTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteLaunchTemplateResponsePrivate
 *
 * \brief Private implementation for DeleteLaunchTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLaunchTemplateResponse instance.
 */
DeleteLaunchTemplateResponsePrivate::DeleteLaunchTemplateResponsePrivate(
    DeleteLaunchTemplateResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DeleteLaunchTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLaunchTemplateResponsePrivate::parseDeleteLaunchTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchTemplateResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
