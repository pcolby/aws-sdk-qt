/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getquerysuggestionsresponse.h"
#include "getquerysuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::GetQuerySuggestionsResponse
 * \brief The GetQuerySuggestionsResponse class provides an interace for kendra GetQuerySuggestions responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::getQuerySuggestions
 */

/*!
 * Constructs a GetQuerySuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetQuerySuggestionsResponse::GetQuerySuggestionsResponse(
        const GetQuerySuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new GetQuerySuggestionsResponsePrivate(this), parent)
{
    setRequest(new GetQuerySuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQuerySuggestionsRequest * GetQuerySuggestionsResponse::request() const
{
    Q_D(const GetQuerySuggestionsResponse);
    return static_cast<const GetQuerySuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra GetQuerySuggestions \a response.
 */
void GetQuerySuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQuerySuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::GetQuerySuggestionsResponsePrivate
 * \brief The GetQuerySuggestionsResponsePrivate class provides private implementation for GetQuerySuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a GetQuerySuggestionsResponsePrivate object with public implementation \a q.
 */
GetQuerySuggestionsResponsePrivate::GetQuerySuggestionsResponsePrivate(
    GetQuerySuggestionsResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra GetQuerySuggestions response element from \a xml.
 */
void GetQuerySuggestionsResponsePrivate::parseGetQuerySuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQuerySuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
