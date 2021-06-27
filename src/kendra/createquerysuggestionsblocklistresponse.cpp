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

#include "createquerysuggestionsblocklistresponse.h"
#include "createquerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::CreateQuerySuggestionsBlockListResponse
 * \brief The CreateQuerySuggestionsBlockListResponse class provides an interace for kendra CreateQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::createQuerySuggestionsBlockList
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQuerySuggestionsBlockListResponse::CreateQuerySuggestionsBlockListResponse(
        const CreateQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new CreateQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new CreateQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQuerySuggestionsBlockListRequest * CreateQuerySuggestionsBlockListResponse::request() const
{
    return static_cast<const CreateQuerySuggestionsBlockListRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra CreateQuerySuggestionsBlockList \a response.
 */
void CreateQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::CreateQuerySuggestionsBlockListResponsePrivate
 * \brief The CreateQuerySuggestionsBlockListResponsePrivate class provides private implementation for CreateQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
CreateQuerySuggestionsBlockListResponsePrivate::CreateQuerySuggestionsBlockListResponsePrivate(
    CreateQuerySuggestionsBlockListResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra CreateQuerySuggestionsBlockList response element from \a xml.
 */
void CreateQuerySuggestionsBlockListResponsePrivate::parseCreateQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
