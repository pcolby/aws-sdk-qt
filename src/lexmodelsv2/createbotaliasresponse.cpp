// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
