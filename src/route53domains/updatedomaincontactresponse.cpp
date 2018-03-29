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

#include "updatedomaincontactresponse.h"
#include "updatedomaincontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  UpdateDomainContactResponse
 *
 * @brief  Handles Route53Domains UpdateDomainContact responses.
 *
 * @see    Route53DomainsClient::updateDomainContact
 */

/**
 * @brief  Constructs a new UpdateDomainContactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainContactResponse::UpdateDomainContactResponse(
        const UpdateDomainContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactRequest(request));
    setReply(reply);
}

const UpdateDomainContactRequest * UpdateDomainContactResponse::request() const
{
    Q_D(const UpdateDomainContactResponse);
    return static_cast<const UpdateDomainContactRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains UpdateDomainContact response.
 *
 * @param  response  Response to parse.
 */
void UpdateDomainContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDomainContactResponsePrivate
 *
 * @brief  Private implementation for UpdateDomainContactResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDomainContactResponse instance.
 */
UpdateDomainContactResponsePrivate::UpdateDomainContactResponsePrivate(
    UpdateDomainContactResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains UpdateDomainContactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDomainContactResponsePrivate::UpdateDomainContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
