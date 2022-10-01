// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcepolicyresponse.h"
#include "describeresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeResourcePolicyResponse
 * \brief The DescribeResourcePolicyResponse class provides an interace for Comprehend DescribeResourcePolicy responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeResourcePolicy
 */

/*!
 * Constructs a DescribeResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourcePolicyResponse::DescribeResourcePolicyResponse(
        const DescribeResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourcePolicyRequest * DescribeResourcePolicyResponse::request() const
{
    Q_D(const DescribeResourcePolicyResponse);
    return static_cast<const DescribeResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeResourcePolicy \a response.
 */
void DescribeResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeResourcePolicyResponsePrivate
 * \brief The DescribeResourcePolicyResponsePrivate class provides private implementation for DescribeResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeResourcePolicyResponsePrivate object with public implementation \a q.
 */
DescribeResourcePolicyResponsePrivate::DescribeResourcePolicyResponsePrivate(
    DescribeResourcePolicyResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeResourcePolicy response element from \a xml.
 */
void DescribeResourcePolicyResponsePrivate::parseDescribeResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
