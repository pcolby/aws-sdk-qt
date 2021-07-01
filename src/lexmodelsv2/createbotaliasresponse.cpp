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

#include "createbotaliasresponse.h"
#include "createbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasResponse
 * \brief The CreateBotAliasResponse class provides an interace for LexModelsV2 CreateBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotAlias
 */

/*!
 * Constructs a CreateBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotAliasResponse::CreateBotAliasResponse(
        const CreateBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotAliasResponsePrivate(this), parent)
{
    setRequest(new CreateBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotAliasRequest * CreateBotAliasResponse::request() const
{
    Q_D(const CreateBotAliasResponse);
    return static_cast<const CreateBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBotAlias \a response.
 */
void CreateBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotAliasResponsePrivate
 * \brief The CreateBotAliasResponsePrivate class provides private implementation for CreateBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotAliasResponsePrivate object with public implementation \a q.
 */
CreateBotAliasResponsePrivate::CreateBotAliasResponsePrivate(
    CreateBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBotAlias response element from \a xml.
 */
void CreateBotAliasResponsePrivate::parseCreateBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
