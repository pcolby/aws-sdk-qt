// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdocumenttextdetectionresponse.h"
#include "startdocumenttextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionResponse
 * \brief The StartDocumentTextDetectionResponse class provides an interace for Textract StartDocumentTextDetection responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startDocumentTextDetection
 */

/*!
 * Constructs a StartDocumentTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartDocumentTextDetectionResponse::StartDocumentTextDetectionResponse(
        const StartDocumentTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new StartDocumentTextDetectionResponsePrivate(this), parent)
{
    setRequest(new StartDocumentTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDocumentTextDetectionRequest * StartDocumentTextDetectionResponse::request() const
{
    Q_D(const StartDocumentTextDetectionResponse);
    return static_cast<const StartDocumentTextDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract StartDocumentTextDetection \a response.
 */
void StartDocumentTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDocumentTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionResponsePrivate
 * \brief The StartDocumentTextDetectionResponsePrivate class provides private implementation for StartDocumentTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartDocumentTextDetectionResponsePrivate object with public implementation \a q.
 */
StartDocumentTextDetectionResponsePrivate::StartDocumentTextDetectionResponsePrivate(
    StartDocumentTextDetectionResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract StartDocumentTextDetection response element from \a xml.
 */
void StartDocumentTextDetectionResponsePrivate::parseStartDocumentTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDocumentTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
