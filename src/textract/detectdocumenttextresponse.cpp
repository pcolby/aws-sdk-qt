// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectdocumenttextresponse.h"
#include "detectdocumenttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::DetectDocumentTextResponse
 * \brief The DetectDocumentTextResponse class provides an interace for Textract DetectDocumentText responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::detectDocumentText
 */

/*!
 * Constructs a DetectDocumentTextResponse object for \a reply to \a request, with parent \a parent.
 */
DetectDocumentTextResponse::DetectDocumentTextResponse(
        const DetectDocumentTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new DetectDocumentTextResponsePrivate(this), parent)
{
    setRequest(new DetectDocumentTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectDocumentTextRequest * DetectDocumentTextResponse::request() const
{
    Q_D(const DetectDocumentTextResponse);
    return static_cast<const DetectDocumentTextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract DetectDocumentText \a response.
 */
void DetectDocumentTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectDocumentTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::DetectDocumentTextResponsePrivate
 * \brief The DetectDocumentTextResponsePrivate class provides private implementation for DetectDocumentTextResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a DetectDocumentTextResponsePrivate object with public implementation \a q.
 */
DetectDocumentTextResponsePrivate::DetectDocumentTextResponsePrivate(
    DetectDocumentTextResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract DetectDocumentText response element from \a xml.
 */
void DetectDocumentTextResponsePrivate::parseDetectDocumentTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectDocumentTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
