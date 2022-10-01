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

#include "updatequerysuggestionsblocklistresponse.h"
#include "updatequerysuggestionsblocklistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListResponse
 * \brief The UpdateQuerySuggestionsBlockListResponse class provides an interace for Kendra UpdateQuerySuggestionsBlockList responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsBlockList
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQuerySuggestionsBlockListResponse::UpdateQuerySuggestionsBlockListResponse(
        const UpdateQuerySuggestionsBlockListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateQuerySuggestionsBlockListResponsePrivate(this), parent)
{
    setRequest(new UpdateQuerySuggestionsBlockListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQuerySuggestionsBlockListRequest * UpdateQuerySuggestionsBlockListResponse::request() const
{
    Q_D(const UpdateQuerySuggestionsBlockListResponse);
    return static_cast<const UpdateQuerySuggestionsBlockListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateQuerySuggestionsBlockList \a response.
 */
void UpdateQuerySuggestionsBlockListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQuerySuggestionsBlockListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListResponsePrivate
 * \brief The UpdateQuerySuggestionsBlockListResponsePrivate class provides private implementation for UpdateQuerySuggestionsBlockListResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListResponsePrivate object with public implementation \a q.
 */
UpdateQuerySuggestionsBlockListResponsePrivate::UpdateQuerySuggestionsBlockListResponsePrivate(
    UpdateQuerySuggestionsBlockListResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateQuerySuggestionsBlockList response element from \a xml.
 */
void UpdateQuerySuggestionsBlockListResponsePrivate::parseUpdateQuerySuggestionsBlockListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQuerySuggestionsBlockListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
