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

#include "describecodereviewresponse.h"
#include "describecodereviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::DescribeCodeReviewResponse
 * \brief The DescribeCodeReviewResponse class provides an interace for CodeGuruReviewer DescribeCodeReview responses.
 *
 * \inmodule QtAwsCodeGuruReviewer
 *
 *  This section provides documentation for the Amazon CodeGuru Reviewer API operations. CodeGuru Reviewer is a service that
 *  uses program analysis and machine learning to detect potential defects that are difficult for developers to find and
 *  recommends fixes in your Java and Python
 * 
 *  code>
 * 
 *  By proactively detecting and providing recommendations for addressing code defects and implementing best practices,
 *  CodeGuru Reviewer improves the overall quality and maintainability of your code base during the code review stage. For
 *  more information about CodeGuru Reviewer, see the <i> <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/welcome.html">Amazon CodeGuru Reviewer User Guide</a>.</i>
 * 
 *  </p
 * 
 *  To improve the security of your CodeGuru Reviewer API calls, you can establish a private connection between your VPC and
 *  CodeGuru Reviewer by creating an <i>interface VPC endpoint</i>. For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/vpc-interface-endpoints.html">CodeGuru Reviewer and
 *  interface VPC endpoints (Amazon Web Services PrivateLink)</a> in the <i>Amazon CodeGuru Reviewer User
 *
 * \sa CodeGuruReviewerClient::describeCodeReview
 */

/*!
 * Constructs a DescribeCodeReviewResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCodeReviewResponse::DescribeCodeReviewResponse(
        const DescribeCodeReviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruReviewerResponse(new DescribeCodeReviewResponsePrivate(this), parent)
{
    setRequest(new DescribeCodeReviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCodeReviewRequest * DescribeCodeReviewResponse::request() const
{
    Q_D(const DescribeCodeReviewResponse);
    return static_cast<const DescribeCodeReviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruReviewer DescribeCodeReview \a response.
 */
void DescribeCodeReviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCodeReviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruReviewer::DescribeCodeReviewResponsePrivate
 * \brief The DescribeCodeReviewResponsePrivate class provides private implementation for DescribeCodeReviewResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a DescribeCodeReviewResponsePrivate object with public implementation \a q.
 */
DescribeCodeReviewResponsePrivate::DescribeCodeReviewResponsePrivate(
    DescribeCodeReviewResponse * const q) : CodeGuruReviewerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruReviewer DescribeCodeReview response element from \a xml.
 */
void DescribeCodeReviewResponsePrivate::parseDescribeCodeReviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCodeReviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruReviewer
} // namespace QtAws
