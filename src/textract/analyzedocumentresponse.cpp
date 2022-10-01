// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "analyzedocumentresponse.h"
#include "analyzedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeDocumentResponse
 * \brief The AnalyzeDocumentResponse class provides an interace for Textract AnalyzeDocument responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeDocument
 */

/*!
 * Constructs a AnalyzeDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
AnalyzeDocumentResponse::AnalyzeDocumentResponse(
        const AnalyzeDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new AnalyzeDocumentResponsePrivate(this), parent)
{
    setRequest(new AnalyzeDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AnalyzeDocumentRequest * AnalyzeDocumentResponse::request() const
{
    Q_D(const AnalyzeDocumentResponse);
    return static_cast<const AnalyzeDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract AnalyzeDocument \a response.
 */
void AnalyzeDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AnalyzeDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::AnalyzeDocumentResponsePrivate
 * \brief The AnalyzeDocumentResponsePrivate class provides private implementation for AnalyzeDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeDocumentResponsePrivate object with public implementation \a q.
 */
AnalyzeDocumentResponsePrivate::AnalyzeDocumentResponsePrivate(
    AnalyzeDocumentResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract AnalyzeDocument response element from \a xml.
 */
void AnalyzeDocumentResponsePrivate::parseAnalyzeDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AnalyzeDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
