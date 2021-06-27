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

#include "deletequerysuggestionsblocklistresponse.h"
#include "deletequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DeleteQuerySuggestionsBlockListResponse
 * \brief The DeleteQuerySuggestionsBlockListResponse class provides an interace for kendra DeleteQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::deleteQuerySuggestionsBlockList
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQuerySuggestionsBlockListResponse::DeleteQuerySuggestionsBlockListResponse(
        const DeleteQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DeleteQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new DeleteQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQuerySuggestionsBlockListRequest * DeleteQuerySuggestionsBlockListResponse::request() const
{
    return static_cast<const DeleteQuerySuggestionsBlockListRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra DeleteQuerySuggestionsBlockList \a response.
 */
void DeleteQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DeleteQuerySuggestionsBlockListResponsePrivate
 * \brief The DeleteQuerySuggestionsBlockListResponsePrivate class provides private implementation for DeleteQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
DeleteQuerySuggestionsBlockListResponsePrivate::DeleteQuerySuggestionsBlockListResponsePrivate(
    DeleteQuerySuggestionsBlockListResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DeleteQuerySuggestionsBlockList response element from \a xml.
 */
void DeleteQuerySuggestionsBlockListResponsePrivate::parseDeleteQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
