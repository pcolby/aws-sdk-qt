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

#include "createvocabularyresponse.h"
#include "createvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateVocabularyResponse
 *
 * \brief The CreateVocabularyResponse class provides an interace for TranscribeService CreateVocabulary responses.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createVocabulary
 */

/*!
 * @brief  Constructs a new CreateVocabularyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVocabularyResponse::CreateVocabularyResponse(
        const CreateVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new CreateVocabularyResponsePrivate(this), parent)
{
    setRequest(new CreateVocabularyRequest(request));
    setReply(reply);
}

const CreateVocabularyRequest * CreateVocabularyResponse::request() const
{
    Q_D(const CreateVocabularyResponse);
    return static_cast<const CreateVocabularyRequest *>(d->request);
}

/*!
 * @brief  Parse a TranscribeService CreateVocabulary response.
 *
 * @param  response  Response to parse.
 */
void CreateVocabularyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateVocabularyResponsePrivate
 *
 * \brief Private implementation for CreateVocabularyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateVocabularyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVocabularyResponse instance.
 */
CreateVocabularyResponsePrivate::CreateVocabularyResponsePrivate(
    CreateVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an TranscribeService CreateVocabularyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVocabularyResponsePrivate::parseCreateVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVocabularyResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
