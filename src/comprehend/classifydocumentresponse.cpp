// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "classifydocumentresponse.h"
#include "classifydocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ClassifyDocumentResponse
 * \brief The ClassifyDocumentResponse class provides an interace for Comprehend ClassifyDocument responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::classifyDocument
 */

/*!
 * Constructs a ClassifyDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
ClassifyDocumentResponse::ClassifyDocumentResponse(
        const ClassifyDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ClassifyDocumentResponsePrivate(this), parent)
{
    setRequest(new ClassifyDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClassifyDocumentRequest * ClassifyDocumentResponse::request() const
{
    Q_D(const ClassifyDocumentResponse);
    return static_cast<const ClassifyDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ClassifyDocument \a response.
 */
void ClassifyDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClassifyDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ClassifyDocumentResponsePrivate
 * \brief The ClassifyDocumentResponsePrivate class provides private implementation for ClassifyDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ClassifyDocumentResponsePrivate object with public implementation \a q.
 */
ClassifyDocumentResponsePrivate::ClassifyDocumentResponsePrivate(
    ClassifyDocumentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ClassifyDocument response element from \a xml.
 */
void ClassifyDocumentResponsePrivate::parseClassifyDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClassifyDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
