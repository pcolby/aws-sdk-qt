// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetectdominantlanguageresponse.h"
#include "batchdetectdominantlanguageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageResponse
 * \brief The BatchDetectDominantLanguageResponse class provides an interace for Comprehend BatchDetectDominantLanguage responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectDominantLanguage
 */

/*!
 * Constructs a BatchDetectDominantLanguageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectDominantLanguageResponse::BatchDetectDominantLanguageResponse(
        const BatchDetectDominantLanguageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectDominantLanguageResponsePrivate(this), parent)
{
    setRequest(new BatchDetectDominantLanguageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectDominantLanguageRequest * BatchDetectDominantLanguageResponse::request() const
{
    Q_D(const BatchDetectDominantLanguageResponse);
    return static_cast<const BatchDetectDominantLanguageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectDominantLanguage \a response.
 */
void BatchDetectDominantLanguageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectDominantLanguageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageResponsePrivate
 * \brief The BatchDetectDominantLanguageResponsePrivate class provides private implementation for BatchDetectDominantLanguageResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectDominantLanguageResponsePrivate object with public implementation \a q.
 */
BatchDetectDominantLanguageResponsePrivate::BatchDetectDominantLanguageResponsePrivate(
    BatchDetectDominantLanguageResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectDominantLanguage response element from \a xml.
 */
void BatchDetectDominantLanguageResponsePrivate::parseBatchDetectDominantLanguageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectDominantLanguageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
