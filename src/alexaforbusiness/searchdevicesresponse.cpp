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

#include "searchdevicesresponse.h"
#include "searchdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  SearchDevicesResponse
 *
 * @brief  Handles AlexaForBusiness SearchDevices responses.
 *
 * @see    AlexaForBusinessClient::searchDevices
 */

/**
 * @brief  Constructs a new SearchDevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchDevicesResponse::SearchDevicesResponse(
        const SearchDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchDevicesResponsePrivate(this), parent)
{
    setRequest(new SearchDevicesRequest(request));
    setReply(reply);
}

const SearchDevicesRequest * SearchDevicesResponse::request() const
{
    Q_D(const SearchDevicesResponse);
    return static_cast<const SearchDevicesRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchDevices response.
 *
 * @param  response  Response to parse.
 */
void SearchDevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchDevicesResponsePrivate
 *
 * @brief  Private implementation for SearchDevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchDevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchDevicesResponse instance.
 */
SearchDevicesResponsePrivate::SearchDevicesResponsePrivate(
    SearchDevicesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchDevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchDevicesResponsePrivate::SearchDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDevicesResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
