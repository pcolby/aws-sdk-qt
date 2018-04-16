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

#include "searchcontactsresponse.h"
#include "searchcontactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchContactsResponse
 *
 * \brief The SearchContactsResponse class encapsulates AlexaForBusiness SearchContacts responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::searchContacts
 */

/*!
 * @brief  Constructs a new SearchContactsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchContactsResponse::SearchContactsResponse(
        const SearchContactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchContactsResponsePrivate(this), parent)
{
    setRequest(new SearchContactsRequest(request));
    setReply(reply);
}

const SearchContactsRequest * SearchContactsResponse::request() const
{
    Q_D(const SearchContactsResponse);
    return static_cast<const SearchContactsRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness SearchContacts response.
 *
 * @param  response  Response to parse.
 */
void SearchContactsResponse::parseSuccess(QIODevice &response)
{
    Q_D(SearchContactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SearchContactsResponsePrivate
 *
 * \brief Private implementation for SearchContactsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SearchContactsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchContactsResponse instance.
 */
SearchContactsResponsePrivate::SearchContactsResponsePrivate(
    SearchContactsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness SearchContactsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchContactsResponsePrivate::parseSearchContactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchContactsResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
