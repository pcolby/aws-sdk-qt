// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotresponse.h"
#include "describebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotResponse
 * \brief The DescribeBotResponse class provides an interace for LexModelsV2 DescribeBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBot
 */

/*!
 * Constructs a DescribeBotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotResponse::DescribeBotResponse(
        const DescribeBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotResponsePrivate(this), parent)
{
    setRequest(new DescribeBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotRequest * DescribeBotResponse::request() const
{
    Q_D(const DescribeBotResponse);
    return static_cast<const DescribeBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBot \a response.
 */
void DescribeBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotResponsePrivate
 * \brief The DescribeBotResponsePrivate class provides private implementation for DescribeBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotResponsePrivate object with public implementation \a q.
 */
DescribeBotResponsePrivate::DescribeBotResponsePrivate(
    DescribeBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBot response element from \a xml.
 */
void DescribeBotResponsePrivate::parseDescribeBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
