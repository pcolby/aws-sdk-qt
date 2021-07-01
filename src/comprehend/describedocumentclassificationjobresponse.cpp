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
