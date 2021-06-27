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

#include "createintentresponse.h"
#include "createintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateIntentResponse
 * \brief The CreateIntentResponse class provides an interace for LexModelsV2 CreateIntent responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createIntent
 */

/*!
 * Constructs a CreateIntentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntentResponse::CreateIntentResponse(
        const CreateIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateIntentResponsePrivate(this), parent)
{
    setRequest(new CreateIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntentRequest * CreateIntentResponse::request() const
{
    return static_cast<const CreateIntentRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateIntent \a response.
 */
void CreateIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateIntentResponsePrivate
 * \brief The CreateIntentResponsePrivate class provides private implementation for CreateIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateIntentResponsePrivate object with public implementation \a q.
 */
CreateIntentResponsePrivate::CreateIntentResponsePrivate(
    CreateIntentResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateIntent response element from \a xml.
 */
void CreateIntentResponsePrivate::parseCreateIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
