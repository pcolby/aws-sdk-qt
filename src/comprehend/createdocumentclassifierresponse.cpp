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
    return static_cast<const CreateDocumentClassifierRequest *>(ComprehendResponse::request());
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
