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

#include "deletetagsfordomainresponse.h"
#include "deletetagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  DeleteTagsForDomainResponse
 *
 * @brief  Handles Route53Domains DeleteTagsForDomain responses.
 *
 * @see    Route53DomainsClient::deleteTagsForDomain
 */

/**
 * @brief  Constructs a new DeleteTagsForDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTagsForDomainResponse::DeleteTagsForDomainResponse(
        const DeleteTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DeleteTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsForDomainRequest(request));
    setReply(reply);
}

const DeleteTagsForDomainRequest * DeleteTagsForDomainResponse::request() const
{
    Q_D(const DeleteTagsForDomainResponse);
    return static_cast<const DeleteTagsForDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains DeleteTagsForDomain response.
 *
 * @param  response  Response to parse.
 */
void DeleteTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTagsForDomainResponsePrivate
 *
 * @brief  Private implementation for DeleteTagsForDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTagsForDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTagsForDomainResponse instance.
 */
DeleteTagsForDomainResponsePrivate::DeleteTagsForDomainResponsePrivate(
    DeleteTagsForDomainQueueResponse * const q) : DeleteTagsForDomainPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains DeleteTagsForDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTagsForDomainResponsePrivate::DeleteTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsForDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
