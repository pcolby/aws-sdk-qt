/*
    Copyright 2013-2019 Paul Colby

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

#include "deletedocumentclassifierresponse.h"
#include "deletedocumentclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteDocumentClassifierResponse
 * \brief The DeleteDocumentClassifierResponse class provides an interace for Comprehend DeleteDocumentClassifier responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteDocumentClassifier
 */

/*!
 * Constructs a DeleteDocumentClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDocumentClassifierResponse::DeleteDocumentClassifierResponse(
        const DeleteDocumentClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DeleteDocumentClassifierResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDocumentClassifierRequest * DeleteDocumentClassifierResponse::request() const
{
    Q_D(const DeleteDocumentClassifierResponse);
    return static_cast<const DeleteDocumentClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DeleteDocumentClassifier \a response.
 */
void DeleteDocumentClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDocumentClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DeleteDocumentClassifierResponsePrivate
 * \brief The DeleteDocumentClassifierResponsePrivate class provides private implementation for DeleteDocumentClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteDocumentClassifierResponsePrivate object with public implementation \a q.
 */
DeleteDocumentClassifierResponsePrivate::DeleteDocumentClassifierResponsePrivate(
    DeleteDocumentClassifierResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DeleteDocumentClassifier response element from \a xml.
 */
void DeleteDocumentClassifierResponsePrivate::parseDeleteDocumentClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
