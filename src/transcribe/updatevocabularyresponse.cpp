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

#include "updatevocabularyresponse.h"
#include "updatevocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyResponse
 *
 * \brief The UpdateVocabularyResponse class provides an interace for TranscribeService UpdateVocabulary responses.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabulary
 */

/*!
 * @brief  Constructs a new UpdateVocabularyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateVocabularyResponse::UpdateVocabularyResponse(
        const UpdateVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new UpdateVocabularyResponsePrivate(this), parent)
{
    setRequest(new UpdateVocabularyRequest(request));
    setReply(reply);
}

const UpdateVocabularyRequest * UpdateVocabularyResponse::request() const
{
    Q_D(const UpdateVocabularyResponse);
    return static_cast<const UpdateVocabularyRequest *>(d->request);
}

/*!
 * @brief  Parse a TranscribeService UpdateVocabulary response.
 *
 * @param  response  Response to parse.
 */
void UpdateVocabularyResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateVocabularyResponsePrivate
 *
 * \brief Private implementation for UpdateVocabularyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateVocabularyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateVocabularyResponse instance.
 */
UpdateVocabularyResponsePrivate::UpdateVocabularyResponsePrivate(
    UpdateVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an TranscribeService UpdateVocabularyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateVocabularyResponsePrivate::parseUpdateVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVocabularyResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
