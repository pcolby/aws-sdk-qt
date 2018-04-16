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

#include "getdistributionconfigresponse.h"
#include "getdistributionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionConfigResponse
 *
 * \brief The GetDistributionConfigResponse class encapsulates CloudFront GetDistributionConfig responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistributionConfig
 */

/*!
 * @brief  Constructs a new GetDistributionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDistributionConfigResponse::GetDistributionConfigResponse(
        const GetDistributionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionConfigResponsePrivate(this), parent)
{
    setRequest(new GetDistributionConfigRequest(request));
    setReply(reply);
}

const GetDistributionConfigRequest * GetDistributionConfigResponse::request() const
{
    Q_D(const GetDistributionConfigResponse);
    return static_cast<const GetDistributionConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront GetDistributionConfig response.
 *
 * @param  response  Response to parse.
 */
void GetDistributionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDistributionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDistributionConfigResponsePrivate
 *
 * \brief Private implementation for GetDistributionConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDistributionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDistributionConfigResponse instance.
 */
GetDistributionConfigResponsePrivate::GetDistributionConfigResponsePrivate(
    GetDistributionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront GetDistributionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDistributionConfigResponsePrivate::parseGetDistributionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
