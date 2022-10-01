// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
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
    Q_D(const DescribeAttackResponse);
    return static_cast<const DescribeAttackRequest *>(d->request);
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
