// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "buildbotlocaleresponse.h"
#include "buildbotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleResponse
 * \brief The BuildBotLocaleResponse class provides an interace for LexModelsV2 BuildBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::buildBotLocale
 */

/*!
 * Constructs a BuildBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
BuildBotLocaleResponse::BuildBotLocaleResponse(
        const BuildBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new BuildBotLocaleResponsePrivate(this), parent)
{
    setRequest(new BuildBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BuildBotLocaleRequest * BuildBotLocaleResponse::request() const
{
    Q_D(const BuildBotLocaleResponse);
    return static_cast<const BuildBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 BuildBotLocale \a response.
 */
void BuildBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BuildBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleResponsePrivate
 * \brief The BuildBotLocaleResponsePrivate class provides private implementation for BuildBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a BuildBotLocaleResponsePrivate object with public implementation \a q.
 */
BuildBotLocaleResponsePrivate::BuildBotLocaleResponsePrivate(
    BuildBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 BuildBotLocale response element from \a xml.
 */
void BuildBotLocaleResponsePrivate::parseBuildBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BuildBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
