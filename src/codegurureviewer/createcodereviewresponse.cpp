// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcodereviewresponse.h"
#include "createcodereviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::CreateCodeReviewResponse
 * \brief The CreateCodeReviewResponse class provides an interace for CodeGuruReviewer CreateCodeReview responses.
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
 * \sa CodeGuruReviewerClient::createCodeReview
 */

/*!
 * Constructs a CreateCodeReviewResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCodeReviewResponse::CreateCodeReviewResponse(
        const CreateCodeReviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruReviewerResponse(new CreateCodeReviewResponsePrivate(this), parent)
{
    setRequest(new CreateCodeReviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCodeReviewRequest * CreateCodeReviewResponse::request() const
{
    Q_D(const CreateCodeReviewResponse);
    return static_cast<const CreateCodeReviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruReviewer CreateCodeReview \a response.
 */
void CreateCodeReviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCodeReviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruReviewer::CreateCodeReviewResponsePrivate
 * \brief The CreateCodeReviewResponsePrivate class provides private implementation for CreateCodeReviewResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CreateCodeReviewResponsePrivate object with public implementation \a q.
 */
CreateCodeReviewResponsePrivate::CreateCodeReviewResponsePrivate(
    CreateCodeReviewResponse * const q) : CodeGuruReviewerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruReviewer CreateCodeReview response element from \a xml.
 */
void CreateCodeReviewResponsePrivate::parseCreateCodeReviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCodeReviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruReviewer
} // namespace QtAws
