// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdocumenttextdetectionresponse.h"
#include "getdocumenttextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionResponse
 * \brief The GetDocumentTextDetectionResponse class provides an interace for Textract GetDocumentTextDetection responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getDocumentTextDetection
 */

/*!
 * Constructs a GetDocumentTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentTextDetectionResponse::GetDocumentTextDetectionResponse(
        const GetDocumentTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new GetDocumentTextDetectionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentTextDetectionRequest * GetDocumentTextDetectionResponse::request() const
{
    Q_D(const GetDocumentTextDetectionResponse);
    return static_cast<const GetDocumentTextDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract GetDocumentTextDetection \a response.
 */
void GetDocumentTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionResponsePrivate
 * \brief The GetDocumentTextDetectionResponsePrivate class provides private implementation for GetDocumentTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetDocumentTextDetectionResponsePrivate object with public implementation \a q.
 */
GetDocumentTextDetectionResponsePrivate::GetDocumentTextDetectionResponsePrivate(
    GetDocumentTextDetectionResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract GetDocumentTextDetection response element from \a xml.
 */
void GetDocumentTextDetectionResponsePrivate::parseGetDocumentTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
