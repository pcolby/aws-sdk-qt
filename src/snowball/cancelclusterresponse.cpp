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

#include "cancelclusterresponse.h"
#include "cancelclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelClusterResponse
 *
 * \brief The CancelClusterResponse class encapsulates Snowball CancelCluster responses.
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
 * \sa SnowballClient::cancelCluster
 */

/*!
 * @brief  Constructs a new CancelClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelClusterResponse::CancelClusterResponse(
        const CancelClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CancelClusterResponsePrivate(this), parent)
{
    setRequest(new CancelClusterRequest(request));
    setReply(reply);
}

const CancelClusterRequest * CancelClusterResponse::request() const
{
    Q_D(const CancelClusterResponse);
    return static_cast<const CancelClusterRequest *>(d->request);
}

/*!
 * @brief  Parse a Snowball CancelCluster response.
 *
 * @param  response  Response to parse.
 */
void CancelClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CancelClusterResponsePrivate
 *
 * \brief Private implementation for CancelClusterResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CancelClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelClusterResponse instance.
 */
CancelClusterResponsePrivate::CancelClusterResponsePrivate(
    CancelClusterResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Snowball CancelClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelClusterResponsePrivate::parseCancelClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelClusterResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
