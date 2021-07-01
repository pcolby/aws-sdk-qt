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

#include "updatebotresponse.h"
#include "updatebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotResponse
 * \brief The UpdateBotResponse class provides an interace for LexModelsV2 UpdateBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBot
 */

/*!
 * Constructs a UpdateBotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotResponse::UpdateBotResponse(
        const UpdateBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotResponsePrivate(this), parent)
{
    setRequest(new UpdateBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotRequest * UpdateBotResponse::request() const
{
    Q_D(const UpdateBotResponse);
    return static_cast<const UpdateBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBot \a response.
 */
void UpdateBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotResponsePrivate
 * \brief The UpdateBotResponsePrivate class provides private implementation for UpdateBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotResponsePrivate object with public implementation \a q.
 */
UpdateBotResponsePrivate::UpdateBotResponsePrivate(
    UpdateBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBot response element from \a xml.
 */
void UpdateBotResponsePrivate::parseUpdateBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
