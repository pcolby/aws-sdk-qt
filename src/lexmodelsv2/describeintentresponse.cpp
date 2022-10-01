// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeintentresponse.h"
#include "describeintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeIntentResponse
 * \brief The DescribeIntentResponse class provides an interace for LexModelsV2 DescribeIntent responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeIntent
 */

/*!
 * Constructs a DescribeIntentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIntentResponse::DescribeIntentResponse(
        const DescribeIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeIntentResponsePrivate(this), parent)
{
    setRequest(new DescribeIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIntentRequest * DescribeIntentResponse::request() const
{
    Q_D(const DescribeIntentResponse);
    return static_cast<const DescribeIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeIntent \a response.
 */
void DescribeIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeIntentResponsePrivate
 * \brief The DescribeIntentResponsePrivate class provides private implementation for DescribeIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeIntentResponsePrivate object with public implementation \a q.
 */
DescribeIntentResponsePrivate::DescribeIntentResponsePrivate(
    DescribeIntentResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeIntent response element from \a xml.
 */
void DescribeIntentResponsePrivate::parseDescribeIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
