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

#include "clearquerysuggestionsresponse.h"
#include "clearquerysuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsResponse
 * \brief The ClearQuerySuggestionsResponse class provides an interace for Kendra ClearQuerySuggestions responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::clearQuerySuggestions
 */

/*!
 * Constructs a ClearQuerySuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
ClearQuerySuggestionsResponse::ClearQuerySuggestionsResponse(
        const ClearQuerySuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ClearQuerySuggestionsResponsePrivate(this), parent)
{
    setRequest(new ClearQuerySuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClearQuerySuggestionsRequest * ClearQuerySuggestionsResponse::request() const
{
    Q_D(const ClearQuerySuggestionsResponse);
    return static_cast<const ClearQuerySuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ClearQuerySuggestions \a response.
 */
void ClearQuerySuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClearQuerySuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsResponsePrivate
 * \brief The ClearQuerySuggestionsResponsePrivate class provides private implementation for ClearQuerySuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ClearQuerySuggestionsResponsePrivate object with public implementation \a q.
 */
ClearQuerySuggestionsResponsePrivate::ClearQuerySuggestionsResponsePrivate(
    ClearQuerySuggestionsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ClearQuerySuggestions response element from \a xml.
 */
void ClearQuerySuggestionsResponsePrivate::parseClearQuerySuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClearQuerySuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
