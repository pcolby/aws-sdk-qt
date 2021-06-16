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

#include "createbotlocaleresponse.h"
#include "createbotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleResponse
 * \brief The CreateBotLocaleResponse class provides an interace for LexModelsV2 CreateBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotLocale
 */

/*!
 * Constructs a CreateBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotLocaleResponse::CreateBotLocaleResponse(
        const CreateBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotLocaleResponsePrivate(this), parent)
{
    setRequest(new CreateBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotLocaleRequest * CreateBotLocaleResponse::request() const
{
    Q_D(const CreateBotLocaleResponse);
    return static_cast<const CreateBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBotLocale \a response.
 */
void CreateBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleResponsePrivate
 * \brief The CreateBotLocaleResponsePrivate class provides private implementation for CreateBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotLocaleResponsePrivate object with public implementation \a q.
 */
CreateBotLocaleResponsePrivate::CreateBotLocaleResponsePrivate(
    CreateBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBotLocale response element from \a xml.
 */
void CreateBotLocaleResponsePrivate::parseCreateBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
