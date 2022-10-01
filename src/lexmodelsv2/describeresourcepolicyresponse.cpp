// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcepolicyresponse.h"
#include "describeresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeResourcePolicyResponse
 * \brief The DescribeResourcePolicyResponse class provides an interace for LexModelsV2 DescribeResourcePolicy responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeResourcePolicy
 */

/*!
 * Constructs a DescribeResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourcePolicyResponse::DescribeResourcePolicyResponse(
        const DescribeResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeResourcePolicyResponsePrivate(this), parent)
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
 * Parses a successful LexModelsV2 DescribeResourcePolicy \a response.
 */
void DescribeResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeResourcePolicyResponsePrivate
 * \brief The DescribeResourcePolicyResponsePrivate class provides private implementation for DescribeResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeResourcePolicyResponsePrivate object with public implementation \a q.
 */
DescribeResourcePolicyResponsePrivate::DescribeResourcePolicyResponsePrivate(
    DescribeResourcePolicyResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeResourcePolicy response element from \a xml.
 */
void DescribeResourcePolicyResponsePrivate::parseDescribeResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
