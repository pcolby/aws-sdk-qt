// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotversionresponse.h"
#include "describebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionResponse
 * \brief The DescribeBotVersionResponse class provides an interace for LexModelsV2 DescribeBotVersion responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotVersion
 */

/*!
 * Constructs a DescribeBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotVersionResponse::DescribeBotVersionResponse(
        const DescribeBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotVersionRequest * DescribeBotVersionResponse::request() const
{
    Q_D(const DescribeBotVersionResponse);
    return static_cast<const DescribeBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotVersion \a response.
 */
void DescribeBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionResponsePrivate
 * \brief The DescribeBotVersionResponsePrivate class provides private implementation for DescribeBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotVersionResponsePrivate object with public implementation \a q.
 */
DescribeBotVersionResponsePrivate::DescribeBotVersionResponsePrivate(
    DescribeBotVersionResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotVersion response element from \a xml.
 */
void DescribeBotVersionResponsePrivate::parseDescribeBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
