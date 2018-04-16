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

#include "getlifecyclepolicypreviewresponse.h"
#include "getlifecyclepolicypreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetLifecyclePolicyPreviewResponse
 *
 * \brief The GetLifecyclePolicyPreviewResponse class provides an interace for ECR GetLifecyclePolicyPreview responses.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::getLifecyclePolicyPreview
 */

/*!
 * @brief  Constructs a new GetLifecyclePolicyPreviewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLifecyclePolicyPreviewResponse::GetLifecyclePolicyPreviewResponse(
        const GetLifecyclePolicyPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetLifecyclePolicyPreviewResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePolicyPreviewRequest(request));
    setReply(reply);
}

const GetLifecyclePolicyPreviewRequest * GetLifecyclePolicyPreviewResponse::request() const
{
    Q_D(const GetLifecyclePolicyPreviewResponse);
    return static_cast<const GetLifecyclePolicyPreviewRequest *>(d->request);
}

/*!
 * @brief  Parse a ECR GetLifecyclePolicyPreview response.
 *
 * @param  response  Response to parse.
 */
void GetLifecyclePolicyPreviewResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLifecyclePolicyPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetLifecyclePolicyPreviewResponsePrivate
 *
 * \brief Private implementation for GetLifecyclePolicyPreviewResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyPreviewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLifecyclePolicyPreviewResponse instance.
 */
GetLifecyclePolicyPreviewResponsePrivate::GetLifecyclePolicyPreviewResponsePrivate(
    GetLifecyclePolicyPreviewResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECR GetLifecyclePolicyPreviewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLifecyclePolicyPreviewResponsePrivate::parseGetLifecyclePolicyPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyPreviewResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
