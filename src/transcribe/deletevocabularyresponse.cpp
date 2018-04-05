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

#include "deletevocabularyresponse.h"
#include "deletevocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  DeleteVocabularyResponse
 *
 * @brief  Handles TranscribeService DeleteVocabulary responses.
 *
 * @see    TranscribeServiceClient::deleteVocabulary
 */

/**
 * @brief  Constructs a new DeleteVocabularyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVocabularyResponse::DeleteVocabularyResponse(
        const DeleteVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DeleteVocabularyResponsePrivate(this), parent)
{
    setRequest(new DeleteVocabularyRequest(request));
    setReply(reply);
}

const DeleteVocabularyRequest * DeleteVocabularyResponse::request() const
{
    Q_D(const DeleteVocabularyResponse);
    return static_cast<const DeleteVocabularyRequest *>(d->request);
}

/**
 * @brief  Parse a TranscribeService DeleteVocabulary response.
 *
 * @param  response  Response to parse.
 */
void DeleteVocabularyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVocabularyResponsePrivate
 *
 * @brief  Private implementation for DeleteVocabularyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVocabularyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVocabularyResponse instance.
 */
DeleteVocabularyResponsePrivate::DeleteVocabularyResponsePrivate(
    DeleteVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an TranscribeService DeleteVocabularyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVocabularyResponsePrivate::parseDeleteVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVocabularyResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
