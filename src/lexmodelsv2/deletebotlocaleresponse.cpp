// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotlocaleresponse.h"
#include "deletebotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleResponse
 * \brief The DeleteBotLocaleResponse class provides an interace for LexModelsV2 DeleteBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotLocale
 */

/*!
 * Constructs a DeleteBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotLocaleResponse::DeleteBotLocaleResponse(
        const DeleteBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotLocaleResponsePrivate(this), parent)
{
    setRequest(new DeleteBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotLocaleRequest * DeleteBotLocaleResponse::request() const
{
    Q_D(const DeleteBotLocaleResponse);
    return static_cast<const DeleteBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteBotLocale \a response.
 */
void DeleteBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleResponsePrivate
 * \brief The DeleteBotLocaleResponsePrivate class provides private implementation for DeleteBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotLocaleResponsePrivate object with public implementation \a q.
 */
DeleteBotLocaleResponsePrivate::DeleteBotLocaleResponsePrivate(
    DeleteBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBotLocale response element from \a xml.
 */
void DeleteBotLocaleResponsePrivate::parseDeleteBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
