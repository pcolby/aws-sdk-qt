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

#include "updateintentresponse.h"
#include "updateintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateIntentResponse
 * \brief The UpdateIntentResponse class provides an interace for LexModelsV2 UpdateIntent responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateIntent
 */

/*!
 * Constructs a UpdateIntentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntentResponse::UpdateIntentResponse(
        const UpdateIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateIntentResponsePrivate(this), parent)
{
    setRequest(new UpdateIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIntentRequest * UpdateIntentResponse::request() const
{
    return static_cast<const UpdateIntentRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateIntent \a response.
 */
void UpdateIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateIntentResponsePrivate
 * \brief The UpdateIntentResponsePrivate class provides private implementation for UpdateIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateIntentResponsePrivate object with public implementation \a q.
 */
UpdateIntentResponsePrivate::UpdateIntentResponsePrivate(
    UpdateIntentResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateIntent response element from \a xml.
 */
void UpdateIntentResponsePrivate::parseUpdateIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
