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

#include "putresourceattributesresponse.h"
#include "putresourceattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesResponse
 *
 * \brief The PutResourceAttributesResponse class encapsulates MigrationHub PutResourceAttributes responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::putResourceAttributes
 */

/*!
 * @brief  Constructs a new PutResourceAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutResourceAttributesResponse::PutResourceAttributesResponse(
        const PutResourceAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new PutResourceAttributesResponsePrivate(this), parent)
{
    setRequest(new PutResourceAttributesRequest(request));
    setReply(reply);
}

const PutResourceAttributesRequest * PutResourceAttributesResponse::request() const
{
    Q_D(const PutResourceAttributesResponse);
    return static_cast<const PutResourceAttributesRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub PutResourceAttributes response.
 *
 * @param  response  Response to parse.
 */
void PutResourceAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutResourceAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutResourceAttributesResponsePrivate
 *
 * \brief Private implementation for PutResourceAttributesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutResourceAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutResourceAttributesResponse instance.
 */
PutResourceAttributesResponsePrivate::PutResourceAttributesResponsePrivate(
    PutResourceAttributesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub PutResourceAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutResourceAttributesResponsePrivate::parsePutResourceAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourceAttributesResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
