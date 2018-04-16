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

#include "getdownloadurlforlayerresponse.h"
#include "getdownloadurlforlayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetDownloadUrlForLayerResponse
 *
 * \brief The GetDownloadUrlForLayerResponse class provides an interace for ECR GetDownloadUrlForLayer responses.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::getDownloadUrlForLayer
 */

/*!
 * @brief  Constructs a new GetDownloadUrlForLayerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDownloadUrlForLayerResponse::GetDownloadUrlForLayerResponse(
        const GetDownloadUrlForLayerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetDownloadUrlForLayerResponsePrivate(this), parent)
{
    setRequest(new GetDownloadUrlForLayerRequest(request));
    setReply(reply);
}

const GetDownloadUrlForLayerRequest * GetDownloadUrlForLayerResponse::request() const
{
    Q_D(const GetDownloadUrlForLayerResponse);
    return static_cast<const GetDownloadUrlForLayerRequest *>(d->request);
}

/*!
 * @brief  Parse a ECR GetDownloadUrlForLayer response.
 *
 * @param  response  Response to parse.
 */
void GetDownloadUrlForLayerResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDownloadUrlForLayerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDownloadUrlForLayerResponsePrivate
 *
 * \brief Private implementation for GetDownloadUrlForLayerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDownloadUrlForLayerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDownloadUrlForLayerResponse instance.
 */
GetDownloadUrlForLayerResponsePrivate::GetDownloadUrlForLayerResponsePrivate(
    GetDownloadUrlForLayerResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECR GetDownloadUrlForLayerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDownloadUrlForLayerResponsePrivate::parseGetDownloadUrlForLayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDownloadUrlForLayerResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
