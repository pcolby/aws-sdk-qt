// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotaliasresponse.h"
#include "describebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasResponse
 * \brief The DescribeBotAliasResponse class provides an interace for LexModelsV2 DescribeBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotAlias
 */

/*!
 * Constructs a DescribeBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotAliasResponse::DescribeBotAliasResponse(
        const DescribeBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotAliasRequest * DescribeBotAliasResponse::request() const
{
    Q_D(const DescribeBotAliasResponse);
    return static_cast<const DescribeBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotAlias \a response.
 */
void DescribeBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasResponsePrivate
 * \brief The DescribeBotAliasResponsePrivate class provides private implementation for DescribeBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotAliasResponsePrivate object with public implementation \a q.
 */
DescribeBotAliasResponsePrivate::DescribeBotAliasResponsePrivate(
    DescribeBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotAlias response element from \a xml.
 */
void DescribeBotAliasResponsePrivate::parseDescribeBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
