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

#include "createbotversionresponse.h"
#include "createbotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionResponse
 * \brief The CreateBotVersionResponse class provides an interace for LexModelsV2 CreateBotVersion responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotVersion
 */

/*!
 * Constructs a CreateBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotVersionResponse::CreateBotVersionResponse(
        const CreateBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotVersionResponsePrivate(this), parent)
{
    setRequest(new CreateBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotVersionRequest * CreateBotVersionResponse::request() const
{
    return static_cast<const CreateBotVersionRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBotVersion \a response.
 */
void CreateBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionResponsePrivate
 * \brief The CreateBotVersionResponsePrivate class provides private implementation for CreateBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotVersionResponsePrivate object with public implementation \a q.
 */
CreateBotVersionResponsePrivate::CreateBotVersionResponsePrivate(
    CreateBotVersionResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBotVersion response element from \a xml.
 */
void CreateBotVersionResponsePrivate::parseCreateBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
