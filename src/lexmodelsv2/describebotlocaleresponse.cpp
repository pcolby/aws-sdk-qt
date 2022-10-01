// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotlocaleresponse.h"
#include "describebotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleResponse
 * \brief The DescribeBotLocaleResponse class provides an interace for LexModelsV2 DescribeBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotLocale
 */

/*!
 * Constructs a DescribeBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotLocaleResponse::DescribeBotLocaleResponse(
        const DescribeBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotLocaleResponsePrivate(this), parent)
{
    setRequest(new DescribeBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotLocaleRequest * DescribeBotLocaleResponse::request() const
{
    Q_D(const DescribeBotLocaleResponse);
    return static_cast<const DescribeBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotLocale \a response.
 */
void DescribeBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleResponsePrivate
 * \brief The DescribeBotLocaleResponsePrivate class provides private implementation for DescribeBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotLocaleResponsePrivate object with public implementation \a q.
 */
DescribeBotLocaleResponsePrivate::DescribeBotLocaleResponsePrivate(
    DescribeBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotLocale response element from \a xml.
 */
void DescribeBotLocaleResponsePrivate::parseDescribeBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
