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

#include "getdomaindetailresponse.h"
#include "getdomaindetailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetDomainDetailResponse
 *
 * \brief The GetDomainDetailResponse class provides an interace for Route53Domains GetDomainDetail responses.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainDetail
 */

/*!
 * @brief  Constructs a new GetDomainDetailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainDetailResponse::GetDomainDetailResponse(
        const GetDomainDetailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetDomainDetailResponsePrivate(this), parent)
{
    setRequest(new GetDomainDetailRequest(request));
    setReply(reply);
}

const GetDomainDetailRequest * GetDomainDetailResponse::request() const
{
    Q_D(const GetDomainDetailResponse);
    return static_cast<const GetDomainDetailRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53Domains GetDomainDetail response.
 *
 * @param  response  Response to parse.
 */
void GetDomainDetailResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainDetailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDomainDetailResponsePrivate
 *
 * \brief Private implementation for GetDomainDetailResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDomainDetailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainDetailResponse instance.
 */
GetDomainDetailResponsePrivate::GetDomainDetailResponsePrivate(
    GetDomainDetailResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53Domains GetDomainDetailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainDetailResponsePrivate::parseGetDomainDetailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainDetailResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
