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

#include "createbotresponse.h"
#include "createbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotResponse
 * \brief The CreateBotResponse class provides an interace for LexModelsV2 CreateBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBot
 */

/*!
 * Constructs a CreateBotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotResponse::CreateBotResponse(
        const CreateBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotResponsePrivate(this), parent)
{
    setRequest(new CreateBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotRequest * CreateBotResponse::request() const
{
    return static_cast<const CreateBotRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBot \a response.
 */
void CreateBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotResponsePrivate
 * \brief The CreateBotResponsePrivate class provides private implementation for CreateBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotResponsePrivate object with public implementation \a q.
 */
CreateBotResponsePrivate::CreateBotResponsePrivate(
    CreateBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBot response element from \a xml.
 */
void CreateBotResponsePrivate::parseCreateBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
