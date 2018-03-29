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

#include "disassociatetagoptionfromresourceresponse.h"
#include "disassociatetagoptionfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DisassociateTagOptionFromResourceResponse
 *
 * @brief  Handles ServiceCatalog DisassociateTagOptionFromResource responses.
 *
 * @see    ServiceCatalogClient::disassociateTagOptionFromResource
 */

/**
 * @brief  Constructs a new DisassociateTagOptionFromResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateTagOptionFromResourceResponse::DisassociateTagOptionFromResourceResponse(
        const DisassociateTagOptionFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateTagOptionFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateTagOptionFromResourceRequest(request));
    setReply(reply);
}

const DisassociateTagOptionFromResourceRequest * DisassociateTagOptionFromResourceResponse::request() const
{
    Q_D(const DisassociateTagOptionFromResourceResponse);
    return static_cast<const DisassociateTagOptionFromResourceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DisassociateTagOptionFromResource response.
 *
 * @param  response  Response to parse.
 */
void DisassociateTagOptionFromResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateTagOptionFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateTagOptionFromResourceResponsePrivate
 *
 * @brief  Private implementation for DisassociateTagOptionFromResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateTagOptionFromResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateTagOptionFromResourceResponse instance.
 */
DisassociateTagOptionFromResourceResponsePrivate::DisassociateTagOptionFromResourceResponsePrivate(
    DisassociateTagOptionFromResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DisassociateTagOptionFromResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateTagOptionFromResourceResponsePrivate::DisassociateTagOptionFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTagOptionFromResourceResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
