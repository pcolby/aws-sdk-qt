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

#include "associatecreatedartifactresponse.h"
#include "associatecreatedartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactResponse
 *
 * \brief The AssociateCreatedArtifactResponse class encapsulates MigrationHub AssociateCreatedArtifact responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::associateCreatedArtifact
 */

/*!
 * @brief  Constructs a new AssociateCreatedArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateCreatedArtifactResponse::AssociateCreatedArtifactResponse(
        const AssociateCreatedArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new AssociateCreatedArtifactResponsePrivate(this), parent)
{
    setRequest(new AssociateCreatedArtifactRequest(request));
    setReply(reply);
}

const AssociateCreatedArtifactRequest * AssociateCreatedArtifactResponse::request() const
{
    Q_D(const AssociateCreatedArtifactResponse);
    return static_cast<const AssociateCreatedArtifactRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub AssociateCreatedArtifact response.
 *
 * @param  response  Response to parse.
 */
void AssociateCreatedArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateCreatedArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssociateCreatedArtifactResponsePrivate
 *
 * \brief Private implementation for AssociateCreatedArtifactResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateCreatedArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateCreatedArtifactResponse instance.
 */
AssociateCreatedArtifactResponsePrivate::AssociateCreatedArtifactResponsePrivate(
    AssociateCreatedArtifactResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub AssociateCreatedArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateCreatedArtifactResponsePrivate::parseAssociateCreatedArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateCreatedArtifactResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
