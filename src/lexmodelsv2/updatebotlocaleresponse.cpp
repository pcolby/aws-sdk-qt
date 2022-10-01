// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
