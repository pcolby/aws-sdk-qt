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

#include "indexfacesresponse.h"
#include "indexfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::IndexFacesResponse
 *
 * \brief The IndexFacesResponse class encapsulates Rekognition IndexFaces responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::indexFaces
 */

/*!
 * @brief  Constructs a new IndexFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
IndexFacesResponse::IndexFacesResponse(
        const IndexFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new IndexFacesResponsePrivate(this), parent)
{
    setRequest(new IndexFacesRequest(request));
    setReply(reply);
}

const IndexFacesRequest * IndexFacesResponse::request() const
{
    Q_D(const IndexFacesResponse);
    return static_cast<const IndexFacesRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition IndexFaces response.
 *
 * @param  response  Response to parse.
 */
void IndexFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(IndexFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class IndexFacesResponsePrivate
 *
 * \brief Private implementation for IndexFacesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new IndexFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IndexFacesResponse instance.
 */
IndexFacesResponsePrivate::IndexFacesResponsePrivate(
    IndexFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition IndexFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void IndexFacesResponsePrivate::parseIndexFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IndexFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
