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

#include "deletegeomatchsetresponse.h"
#include "deletegeomatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteGeoMatchSetResponse
 *
 * @brief  Handles WAFRegional DeleteGeoMatchSet responses.
 *
 * @see    WAFRegionalClient::deleteGeoMatchSet
 */

/**
 * @brief  Constructs a new DeleteGeoMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGeoMatchSetResponse::DeleteGeoMatchSetResponse(
        const DeleteGeoMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteGeoMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteGeoMatchSetRequest(request));
    setReply(reply);
}

const DeleteGeoMatchSetRequest * DeleteGeoMatchSetResponse::request() const
{
    Q_D(const DeleteGeoMatchSetResponse);
    return static_cast<const DeleteGeoMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeleteGeoMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteGeoMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGeoMatchSetResponsePrivate
 *
 * @brief  Private implementation for DeleteGeoMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGeoMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGeoMatchSetResponse instance.
 */
DeleteGeoMatchSetResponsePrivate::DeleteGeoMatchSetResponsePrivate(
    DeleteGeoMatchSetQueueResponse * const q) : DeleteGeoMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteGeoMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGeoMatchSetResponsePrivate::DeleteGeoMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGeoMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
