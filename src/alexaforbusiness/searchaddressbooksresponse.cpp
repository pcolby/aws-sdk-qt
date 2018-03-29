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

#include "searchaddressbooksresponse.h"
#include "searchaddressbooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  SearchAddressBooksResponse
 *
 * @brief  Handles AlexaForBusiness SearchAddressBooks responses.
 *
 * @see    AlexaForBusinessClient::searchAddressBooks
 */

/**
 * @brief  Constructs a new SearchAddressBooksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchAddressBooksResponse::SearchAddressBooksResponse(
        const SearchAddressBooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchAddressBooksResponsePrivate(this), parent)
{
    setRequest(new SearchAddressBooksRequest(request));
    setReply(reply);
}

const SearchAddressBooksRequest * SearchAddressBooksResponse::request() const
{
    Q_D(const SearchAddressBooksResponse);
    return static_cast<const SearchAddressBooksRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchAddressBooks response.
 *
 * @param  response  Response to parse.
 */
void SearchAddressBooksResponse::parseSuccess(QIODevice &response)
{
    Q_D(SearchAddressBooksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchAddressBooksResponsePrivate
 *
 * @brief  Private implementation for SearchAddressBooksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchAddressBooksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchAddressBooksResponse instance.
 */
SearchAddressBooksResponsePrivate::SearchAddressBooksResponsePrivate(
    SearchAddressBooksResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchAddressBooksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchAddressBooksResponsePrivate::parseSearchAddressBooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchAddressBooksResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
