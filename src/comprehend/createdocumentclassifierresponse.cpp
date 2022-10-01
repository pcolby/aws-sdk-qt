// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdocumentclassifierresponse.h"
#include "createdocumentclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateDocumentClassifierResponse
 * \brief The CreateDocumentClassifierResponse class provides an interace for Comprehend CreateDocumentClassifier responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createDocumentClassifier
 */

/*!
 * Constructs a CreateDocumentClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDocumentClassifierResponse::CreateDocumentClassifierResponse(
        const CreateDocumentClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new CreateDocumentClassifierResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDocumentClassifierRequest * CreateDocumentClassifierResponse::request() const
{
    Q_D(const CreateDocumentClassifierResponse);
    return static_cast<const CreateDocumentClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend CreateDocumentClassifier \a response.
 */
void CreateDocumentClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDocumentClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::CreateDocumentClassifierResponsePrivate
 * \brief The CreateDocumentClassifierResponsePrivate class provides private implementation for CreateDocumentClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateDocumentClassifierResponsePrivate object with public implementation \a q.
 */
CreateDocumentClassifierResponsePrivate::CreateDocumentClassifierResponsePrivate(
    CreateDocumentClassifierResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend CreateDocumentClassifier response element from \a xml.
 */
void CreateDocumentClassifierResponsePrivate::parseCreateDocumentClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
