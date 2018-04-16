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

#include "deletelexiconresponse.h"
#include "deletelexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DeleteLexiconResponse
 *
 * \brief The DeleteLexiconResponse class encapsulates Polly DeleteLexicon responses.
 *
 * \ingroup Polly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::deleteLexicon
 */

/*!
 * @brief  Constructs a new DeleteLexiconResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLexiconResponse::DeleteLexiconResponse(
        const DeleteLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new DeleteLexiconResponsePrivate(this), parent)
{
    setRequest(new DeleteLexiconRequest(request));
    setReply(reply);
}

const DeleteLexiconRequest * DeleteLexiconResponse::request() const
{
    Q_D(const DeleteLexiconResponse);
    return static_cast<const DeleteLexiconRequest *>(d->request);
}

/*!
 * @brief  Parse a Polly DeleteLexicon response.
 *
 * @param  response  Response to parse.
 */
void DeleteLexiconResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLexiconResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteLexiconResponsePrivate
 *
 * \brief Private implementation for DeleteLexiconResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteLexiconResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLexiconResponse instance.
 */
DeleteLexiconResponsePrivate::DeleteLexiconResponsePrivate(
    DeleteLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Polly DeleteLexiconResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLexiconResponsePrivate::parseDeleteLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLexiconResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
