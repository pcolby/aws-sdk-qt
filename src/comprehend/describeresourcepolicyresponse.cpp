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
