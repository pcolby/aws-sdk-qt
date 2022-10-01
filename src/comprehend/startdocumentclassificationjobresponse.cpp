// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdocumentclassificationjobresponse.h"
#include "startdocumentclassificationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDocumentClassificationJobResponse
 * \brief The StartDocumentClassificationJobResponse class provides an interace for Comprehend StartDocumentClassificationJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDocumentClassificationJob
 */

/*!
 * Constructs a StartDocumentClassificationJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDocumentClassificationJobResponse::StartDocumentClassificationJobResponse(
        const StartDocumentClassificationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartDocumentClassificationJobResponsePrivate(this), parent)
{
    setRequest(new StartDocumentClassificationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDocumentClassificationJobRequest * StartDocumentClassificationJobResponse::request() const
{
    Q_D(const StartDocumentClassificationJobResponse);
    return static_cast<const StartDocumentClassificationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartDocumentClassificationJob \a response.
 */
void StartDocumentClassificationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDocumentClassificationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartDocumentClassificationJobResponsePrivate
 * \brief The StartDocumentClassificationJobResponsePrivate class provides private implementation for StartDocumentClassificationJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDocumentClassificationJobResponsePrivate object with public implementation \a q.
 */
StartDocumentClassificationJobResponsePrivate::StartDocumentClassificationJobResponsePrivate(
    StartDocumentClassificationJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartDocumentClassificationJob response element from \a xml.
 */
void StartDocumentClassificationJobResponsePrivate::parseStartDocumentClassificationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDocumentClassificationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
