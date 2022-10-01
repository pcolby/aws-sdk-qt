// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecustomvocabularymetadataresponse.h"
#include "describecustomvocabularymetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeCustomVocabularyMetadataResponse
 * \brief The DescribeCustomVocabularyMetadataResponse class provides an interace for LexModelsV2 DescribeCustomVocabularyMetadata responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeCustomVocabularyMetadata
 */

/*!
 * Constructs a DescribeCustomVocabularyMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCustomVocabularyMetadataResponse::DescribeCustomVocabularyMetadataResponse(
        const DescribeCustomVocabularyMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeCustomVocabularyMetadataResponsePrivate(this), parent)
{
    setRequest(new DescribeCustomVocabularyMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCustomVocabularyMetadataRequest * DescribeCustomVocabularyMetadataResponse::request() const
{
    Q_D(const DescribeCustomVocabularyMetadataResponse);
    return static_cast<const DescribeCustomVocabularyMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeCustomVocabularyMetadata \a response.
 */
void DescribeCustomVocabularyMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCustomVocabularyMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeCustomVocabularyMetadataResponsePrivate
 * \brief The DescribeCustomVocabularyMetadataResponsePrivate class provides private implementation for DescribeCustomVocabularyMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeCustomVocabularyMetadataResponsePrivate object with public implementation \a q.
 */
DescribeCustomVocabularyMetadataResponsePrivate::DescribeCustomVocabularyMetadataResponsePrivate(
    DescribeCustomVocabularyMetadataResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeCustomVocabularyMetadata response element from \a xml.
 */
void DescribeCustomVocabularyMetadataResponsePrivate::parseDescribeCustomVocabularyMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCustomVocabularyMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
