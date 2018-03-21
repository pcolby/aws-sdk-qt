/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "definesuggesterresponse.h"
#include "definesuggesterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DefineSuggesterResponse
 *
 * @brief  Handles CloudSearch DefineSuggester responses.
 *
 * @see    CloudSearchClient::defineSuggester
 */

/**
 * @brief  Constructs a new DefineSuggesterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DefineSuggesterResponse::DefineSuggesterResponse(
        const DefineSuggesterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineSuggesterResponsePrivate(this), parent)
{
    setRequest(new DefineSuggesterRequest(request));
    setReply(reply);
}

const DefineSuggesterRequest * DefineSuggesterResponse::request() const
{
    Q_D(const DefineSuggesterResponse);
    return static_cast<const DefineSuggesterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DefineSuggester response.
 *
 * @param  response  Response to parse.
 */
void DefineSuggesterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DefineSuggesterResponsePrivate
 *
 * @brief  Private implementation for DefineSuggesterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineSuggesterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DefineSuggesterResponse instance.
 */
DefineSuggesterResponsePrivate::DefineSuggesterResponsePrivate(
    DefineSuggesterQueueResponse * const q) : DefineSuggesterPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DefineSuggesterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DefineSuggesterResponsePrivate::DefineSuggesterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineSuggesterResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
