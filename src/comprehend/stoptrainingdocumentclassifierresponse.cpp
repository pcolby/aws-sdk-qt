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

#include "stoptrainingdocumentclassifierresponse.h"
#include "stoptrainingdocumentclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTrainingDocumentClassifierResponse
 * \brief The StopTrainingDocumentClassifierResponse class provides an interace for Comprehend StopTrainingDocumentClassifier responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTrainingDocumentClassifier
 */

/*!
 * Constructs a StopTrainingDocumentClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
StopTrainingDocumentClassifierResponse::StopTrainingDocumentClassifierResponse(
        const StopTrainingDocumentClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopTrainingDocumentClassifierResponsePrivate(this), parent)
{
    setRequest(new StopTrainingDocumentClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTrainingDocumentClassifierRequest * StopTrainingDocumentClassifierResponse::request() const
{
    Q_D(const StopTrainingDocumentClassifierResponse);
    return static_cast<const StopTrainingDocumentClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopTrainingDocumentClassifier \a response.
 */
void StopTrainingDocumentClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTrainingDocumentClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopTrainingDocumentClassifierResponsePrivate
 * \brief The StopTrainingDocumentClassifierResponsePrivate class provides private implementation for StopTrainingDocumentClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTrainingDocumentClassifierResponsePrivate object with public implementation \a q.
 */
StopTrainingDocumentClassifierResponsePrivate::StopTrainingDocumentClassifierResponsePrivate(
    StopTrainingDocumentClassifierResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopTrainingDocumentClassifier response element from \a xml.
 */
void StopTrainingDocumentClassifierResponsePrivate::parseStopTrainingDocumentClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTrainingDocumentClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
