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

#include "updatebotlocaleresponse.h"
#include "updatebotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotLocaleResponse
 * \brief The UpdateBotLocaleResponse class provides an interace for LexModelsV2 UpdateBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotLocale
 */

/*!
 * Constructs a UpdateBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotLocaleResponse::UpdateBotLocaleResponse(
        const UpdateBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotLocaleResponsePrivate(this), parent)
{
    setRequest(new UpdateBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotLocaleRequest * UpdateBotLocaleResponse::request() const
{
    Q_D(const UpdateBotLocaleResponse);
    return static_cast<const UpdateBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBotLocale \a response.
 */
void UpdateBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotLocaleResponsePrivate
 * \brief The UpdateBotLocaleResponsePrivate class provides private implementation for UpdateBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotLocaleResponsePrivate object with public implementation \a q.
 */
UpdateBotLocaleResponsePrivate::UpdateBotLocaleResponsePrivate(
    UpdateBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBotLocale response element from \a xml.
 */
void UpdateBotLocaleResponsePrivate::parseUpdateBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
