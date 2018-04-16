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

#include "deletecollectionresponse.h"
#include "deletecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteCollectionResponse
 *
 * \brief The DeleteCollectionResponse class encapsulates Rekognition DeleteCollection responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteCollection
 */

/*!
 * @brief  Constructs a new DeleteCollectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCollectionResponse::DeleteCollectionResponse(
        const DeleteCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteCollectionResponsePrivate(this), parent)
{
    setRequest(new DeleteCollectionRequest(request));
    setReply(reply);
}

const DeleteCollectionRequest * DeleteCollectionResponse::request() const
{
    Q_D(const DeleteCollectionResponse);
    return static_cast<const DeleteCollectionRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition DeleteCollection response.
 *
 * @param  response  Response to parse.
 */
void DeleteCollectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteCollectionResponsePrivate
 *
 * \brief Private implementation for DeleteCollectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCollectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCollectionResponse instance.
 */
DeleteCollectionResponsePrivate::DeleteCollectionResponsePrivate(
    DeleteCollectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition DeleteCollectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCollectionResponsePrivate::parseDeleteCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCollectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
