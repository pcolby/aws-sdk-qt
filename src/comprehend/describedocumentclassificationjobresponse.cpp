// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedocumentclassificationjobresponse.h"
#include "describedocumentclassificationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassificationJobResponse
 * \brief The DescribeDocumentClassificationJobResponse class provides an interace for Comprehend DescribeDocumentClassificationJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDocumentClassificationJob
 */

/*!
 * Constructs a DescribeDocumentClassificationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDocumentClassificationJobResponse::DescribeDocumentClassificationJobResponse(
        const DescribeDocumentClassificationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeDocumentClassificationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentClassificationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDocumentClassificationJobRequest * DescribeDocumentClassificationJobResponse::request() const
{
    Q_D(const DescribeDocumentClassificationJobResponse);
    return static_cast<const DescribeDocumentClassificationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeDocumentClassificationJob \a response.
 */
void DescribeDocumentClassificationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDocumentClassificationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassificationJobResponsePrivate
 * \brief The DescribeDocumentClassificationJobResponsePrivate class provides private implementation for DescribeDocumentClassificationJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDocumentClassificationJobResponsePrivate object with public implementation \a q.
 */
DescribeDocumentClassificationJobResponsePrivate::DescribeDocumentClassificationJobResponsePrivate(
    DescribeDocumentClassificationJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeDocumentClassificationJob response element from \a xml.
 */
void DescribeDocumentClassificationJobResponsePrivate::parseDescribeDocumentClassificationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentClassificationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
