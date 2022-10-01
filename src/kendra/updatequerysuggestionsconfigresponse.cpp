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

#include "updatequerysuggestionsconfigresponse.h"
#include "updatequerysuggestionsconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigResponse
 * \brief The UpdateQuerySuggestionsConfigResponse class provides an interace for Kendra UpdateQuerySuggestionsConfig responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsConfig
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQuerySuggestionsConfigResponse::UpdateQuerySuggestionsConfigResponse(
        const UpdateQuerySuggestionsConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateQuerySuggestionsConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateQuerySuggestionsConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQuerySuggestionsConfigRequest * UpdateQuerySuggestionsConfigResponse::request() const
{
    Q_D(const UpdateQuerySuggestionsConfigResponse);
    return static_cast<const UpdateQuerySuggestionsConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateQuerySuggestionsConfig \a response.
 */
void UpdateQuerySuggestionsConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQuerySuggestionsConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigResponsePrivate
 * \brief The UpdateQuerySuggestionsConfigResponsePrivate class provides private implementation for UpdateQuerySuggestionsConfigResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigResponsePrivate object with public implementation \a q.
 */
UpdateQuerySuggestionsConfigResponsePrivate::UpdateQuerySuggestionsConfigResponsePrivate(
    UpdateQuerySuggestionsConfigResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateQuerySuggestionsConfig response element from \a xml.
 */
void UpdateQuerySuggestionsConfigResponsePrivate::parseUpdateQuerySuggestionsConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQuerySuggestionsConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
