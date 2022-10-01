// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebotaliasresponse.h"
#include "updatebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasResponse
 * \brief The UpdateBotAliasResponse class provides an interace for LexModelsV2 UpdateBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotAlias
 */

/*!
 * Constructs a UpdateBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotAliasResponse::UpdateBotAliasResponse(
        const UpdateBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotAliasRequest * UpdateBotAliasResponse::request() const
{
    Q_D(const UpdateBotAliasResponse);
    return static_cast<const UpdateBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBotAlias \a response.
 */
void UpdateBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasResponsePrivate
 * \brief The UpdateBotAliasResponsePrivate class provides private implementation for UpdateBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotAliasResponsePrivate object with public implementation \a q.
 */
UpdateBotAliasResponsePrivate::UpdateBotAliasResponsePrivate(
    UpdateBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBotAlias response element from \a xml.
 */
void UpdateBotAliasResponsePrivate::parseUpdateBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
