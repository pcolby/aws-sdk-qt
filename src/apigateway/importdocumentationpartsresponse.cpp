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

#include "importdocumentationpartsresponse.h"
#include "importdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportDocumentationPartsResponse
 *
 * \brief The ImportDocumentationPartsResponse class encapsulates APIGateway ImportDocumentationParts responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importDocumentationParts
 */

/*!
 * @brief  Constructs a new ImportDocumentationPartsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportDocumentationPartsResponse::ImportDocumentationPartsResponse(
        const ImportDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new ImportDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new ImportDocumentationPartsRequest(request));
    setReply(reply);
}

const ImportDocumentationPartsRequest * ImportDocumentationPartsResponse::request() const
{
    Q_D(const ImportDocumentationPartsResponse);
    return static_cast<const ImportDocumentationPartsRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway ImportDocumentationParts response.
 *
 * @param  response  Response to parse.
 */
void ImportDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ImportDocumentationPartsResponsePrivate
 *
 * \brief Private implementation for ImportDocumentationPartsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ImportDocumentationPartsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportDocumentationPartsResponse instance.
 */
ImportDocumentationPartsResponsePrivate::ImportDocumentationPartsResponsePrivate(
    ImportDocumentationPartsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway ImportDocumentationPartsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportDocumentationPartsResponsePrivate::parseImportDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportDocumentationPartsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
