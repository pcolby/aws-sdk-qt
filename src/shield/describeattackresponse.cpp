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

#include "describeattackresponse.h"
#include "describeattackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeAttackResponse
 * \brief The DescribeAttackResponse class provides an interace for Shield DescribeAttack responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::describeAttack
 */

/*!
 * Constructs a DescribeAttackResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAttackResponse::DescribeAttackResponse(
        const DescribeAttackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeAttackResponsePrivate(this), parent)
{
    setRequest(new DescribeAttackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAttackRequest * DescribeAttackResponse::request() const
{
    return static_cast<const DescribeAttackRequest *>(ShieldResponse::request());
}

/*!
 * \reimp
 * Parses a successful Shield DescribeAttack \a response.
 */
void DescribeAttackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAttackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeAttackResponsePrivate
 * \brief The DescribeAttackResponsePrivate class provides private implementation for DescribeAttackResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeAttackResponsePrivate object with public implementation \a q.
 */
DescribeAttackResponsePrivate::DescribeAttackResponsePrivate(
    DescribeAttackResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeAttack response element from \a xml.
 */
void DescribeAttackResponsePrivate::parseDescribeAttackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
