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

#include "updatetagsfordomainresponse.h"
#include "updatetagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  UpdateTagsForDomainResponse
 *
 * @brief  Handles Route53Domains UpdateTagsForDomain responses.
 *
 * @see    Route53DomainsClient::updateTagsForDomain
 */

/**
 * @brief  Constructs a new UpdateTagsForDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTagsForDomainResponse::UpdateTagsForDomainResponse(
        const UpdateTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateTagsForDomainRequest(request));
    setReply(reply);
}

const UpdateTagsForDomainRequest * UpdateTagsForDomainResponse::request() const
{
    Q_D(const UpdateTagsForDomainResponse);
    return static_cast<const UpdateTagsForDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains UpdateTagsForDomain response.
 *
 * @param  response  Response to parse.
 */
void UpdateTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTagsForDomainResponsePrivate
 *
 * @brief  Private implementation for UpdateTagsForDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTagsForDomainResponse instance.
 */
UpdateTagsForDomainResponsePrivate::UpdateTagsForDomainResponsePrivate(
    UpdateTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains UpdateTagsForDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTagsForDomainResponsePrivate::UpdateTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTagsForDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
