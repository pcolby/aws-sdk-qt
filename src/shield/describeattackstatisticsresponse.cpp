// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeattackstatisticsresponse.h"
#include "describeattackstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeAttackStatisticsResponse
 * \brief The DescribeAttackStatisticsResponse class provides an interace for Shield DescribeAttackStatistics responses.
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
 * \sa ShieldClient::describeAttackStatistics
 */

/*!
 * Constructs a DescribeAttackStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAttackStatisticsResponse::DescribeAttackStatisticsResponse(
        const DescribeAttackStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeAttackStatisticsResponsePrivate(this), parent)
{
    setRequest(new DescribeAttackStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAttackStatisticsRequest * DescribeAttackStatisticsResponse::request() const
{
    Q_D(const DescribeAttackStatisticsResponse);
    return static_cast<const DescribeAttackStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeAttackStatistics \a response.
 */
void DescribeAttackStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAttackStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeAttackStatisticsResponsePrivate
 * \brief The DescribeAttackStatisticsResponsePrivate class provides private implementation for DescribeAttackStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeAttackStatisticsResponsePrivate object with public implementation \a q.
 */
DescribeAttackStatisticsResponsePrivate::DescribeAttackStatisticsResponsePrivate(
    DescribeAttackStatisticsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeAttackStatistics response element from \a xml.
 */
void DescribeAttackStatisticsResponsePrivate::parseDescribeAttackStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttackStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
