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

#include "getvocabularyresponse.h"
#include "getvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetVocabularyResponse
 *
 * \brief The GetVocabularyResponse class encapsulates TranscribeService GetVocabulary responses.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabulary
 */

/*!
 * @brief  Constructs a new GetVocabularyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVocabularyResponse::GetVocabularyResponse(
        const GetVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new GetVocabularyResponsePrivate(this), parent)
{
    setRequest(new GetVocabularyRequest(request));
    setReply(reply);
}

const GetVocabularyRequest * GetVocabularyResponse::request() const
{
    Q_D(const GetVocabularyResponse);
    return static_cast<const GetVocabularyRequest *>(d->request);
}

/*!
 * @brief  Parse a TranscribeService GetVocabulary response.
 *
 * @param  response  Response to parse.
 */
void GetVocabularyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetVocabularyResponsePrivate
 *
 * \brief Private implementation for GetVocabularyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetVocabularyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVocabularyResponse instance.
 */
GetVocabularyResponsePrivate::GetVocabularyResponsePrivate(
    GetVocabularyResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an TranscribeService GetVocabularyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVocabularyResponsePrivate::parseGetVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVocabularyResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
