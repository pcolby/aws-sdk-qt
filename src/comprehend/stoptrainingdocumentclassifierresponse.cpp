// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
