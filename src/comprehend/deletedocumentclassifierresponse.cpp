// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
