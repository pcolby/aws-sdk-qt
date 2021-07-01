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
