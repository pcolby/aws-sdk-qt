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

#include "initiatelayeruploadresponse.h"
#include "initiatelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::InitiateLayerUploadResponse
 *
 * \brief The InitiateLayerUploadResponse class encapsulates ECR InitiateLayerUpload responses.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::initiateLayerUpload
 */

/*!
 * @brief  Constructs a new InitiateLayerUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateLayerUploadResponse::InitiateLayerUploadResponse(
        const InitiateLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new InitiateLayerUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateLayerUploadRequest(request));
    setReply(reply);
}

const InitiateLayerUploadRequest * InitiateLayerUploadResponse::request() const
{
    Q_D(const InitiateLayerUploadResponse);
    return static_cast<const InitiateLayerUploadRequest *>(d->request);
}

/*!
 * @brief  Parse a ECR InitiateLayerUpload response.
 *
 * @param  response  Response to parse.
 */
void InitiateLayerUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(InitiateLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class InitiateLayerUploadResponsePrivate
 *
 * \brief Private implementation for InitiateLayerUploadResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateLayerUploadResponse instance.
 */
InitiateLayerUploadResponsePrivate::InitiateLayerUploadResponsePrivate(
    InitiateLayerUploadResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECR InitiateLayerUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateLayerUploadResponsePrivate::parseInitiateLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateLayerUploadResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
