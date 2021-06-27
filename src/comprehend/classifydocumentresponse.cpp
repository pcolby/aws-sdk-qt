/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const ClassifyDocumentRequest *>(ComprehendResponse::request());
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
