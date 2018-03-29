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

#include "searchprofilesresponse.h"
#include "searchprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SearchProfilesResponse
 *
 * @brief  Handles AlexaForBusiness SearchProfiles responses.
 *
 * @see    AlexaForBusinessClient::searchProfiles
 */

/**
 * @brief  Constructs a new SearchProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchProfilesResponse::SearchProfilesResponse(
        const SearchProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchProfilesResponsePrivate(this), parent)
{
    setRequest(new SearchProfilesRequest(request));
    setReply(reply);
}

const SearchProfilesRequest * SearchProfilesResponse::request() const
{
    Q_D(const SearchProfilesResponse);
    return static_cast<const SearchProfilesRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchProfiles response.
 *
 * @param  response  Response to parse.
 */
void SearchProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchProfilesResponsePrivate
 *
 * @brief  Private implementation for SearchProfilesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchProfilesResponse instance.
 */
SearchProfilesResponsePrivate::SearchProfilesResponsePrivate(
    SearchProfilesQueueResponse * const q) : SearchProfilesPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchProfilesResponsePrivate::SearchProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProfilesResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
