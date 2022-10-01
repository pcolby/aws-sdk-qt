// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprotectionresponse.h"
#include "describeprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionResponse
 * \brief The DescribeProtectionResponse class provides an interace for Shield DescribeProtection responses.
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
 * \sa ShieldClient::describeProtection
 */

/*!
 * Constructs a DescribeProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProtectionResponse::DescribeProtectionResponse(
        const DescribeProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeProtectionResponsePrivate(this), parent)
{
    setRequest(new DescribeProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProtectionRequest * DescribeProtectionResponse::request() const
{
    Q_D(const DescribeProtectionResponse);
    return static_cast<const DescribeProtectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeProtection \a response.
 */
void DescribeProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeProtectionResponsePrivate
 * \brief The DescribeProtectionResponsePrivate class provides private implementation for DescribeProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeProtectionResponsePrivate object with public implementation \a q.
 */
DescribeProtectionResponsePrivate::DescribeProtectionResponsePrivate(
    DescribeProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeProtection response element from \a xml.
 */
void DescribeProtectionResponsePrivate::parseDescribeProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
