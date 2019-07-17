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

#include "describedocumentclassifierresponse.h"
#include "describedocumentclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassifierResponse
 * \brief The DescribeDocumentClassifierResponse class provides an interace for Comprehend DescribeDocumentClassifier responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDocumentClassifier
 */

/*!
 * Constructs a DescribeDocumentClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDocumentClassifierResponse::DescribeDocumentClassifierResponse(
        const DescribeDocumentClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeDocumentClassifierResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDocumentClassifierRequest * DescribeDocumentClassifierResponse::request() const
{
    Q_D(const DescribeDocumentClassifierResponse);
    return static_cast<const DescribeDocumentClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeDocumentClassifier \a response.
 */
void DescribeDocumentClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDocumentClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeDocumentClassifierResponsePrivate
 * \brief The DescribeDocumentClassifierResponsePrivate class provides private implementation for DescribeDocumentClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDocumentClassifierResponsePrivate object with public implementation \a q.
 */
DescribeDocumentClassifierResponsePrivate::DescribeDocumentClassifierResponsePrivate(
    DescribeDocumentClassifierResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeDocumentClassifier response element from \a xml.
 */
void DescribeDocumentClassifierResponsePrivate::parseDescribeDocumentClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
