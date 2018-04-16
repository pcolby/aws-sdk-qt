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

#include "createclusterresponse.h"
#include "createclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CreateClusterResponse
 *
 * \brief The CreateClusterResponse class encapsulates Snowball CreateCluster responses.
 *
 * \ingroup Snowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::createCluster
 */

/*!
 * @brief  Constructs a new CreateClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterResponse::CreateClusterResponse(
        const CreateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateClusterResponsePrivate(this), parent)
{
    setRequest(new CreateClusterRequest(request));
    setReply(reply);
}

const CreateClusterRequest * CreateClusterResponse::request() const
{
    Q_D(const CreateClusterResponse);
    return static_cast<const CreateClusterRequest *>(d->request);
}

/*!
 * @brief  Parse a Snowball CreateCluster response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateClusterResponsePrivate
 *
 * \brief Private implementation for CreateClusterResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterResponse instance.
 */
CreateClusterResponsePrivate::CreateClusterResponsePrivate(
    CreateClusterResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Snowball CreateClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterResponsePrivate::parseCreateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
