// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeemergencycontactsettingsresponse.h"
#include "describeemergencycontactsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeEmergencyContactSettingsResponse
 * \brief The DescribeEmergencyContactSettingsResponse class provides an interace for Shield DescribeEmergencyContactSettings responses.
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
 * \sa ShieldClient::describeEmergencyContactSettings
 */

/*!
 * Constructs a DescribeEmergencyContactSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEmergencyContactSettingsResponse::DescribeEmergencyContactSettingsResponse(
        const DescribeEmergencyContactSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeEmergencyContactSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeEmergencyContactSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEmergencyContactSettingsRequest * DescribeEmergencyContactSettingsResponse::request() const
{
    Q_D(const DescribeEmergencyContactSettingsResponse);
    return static_cast<const DescribeEmergencyContactSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeEmergencyContactSettings \a response.
 */
void DescribeEmergencyContactSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEmergencyContactSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeEmergencyContactSettingsResponsePrivate
 * \brief The DescribeEmergencyContactSettingsResponsePrivate class provides private implementation for DescribeEmergencyContactSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeEmergencyContactSettingsResponsePrivate object with public implementation \a q.
 */
DescribeEmergencyContactSettingsResponsePrivate::DescribeEmergencyContactSettingsResponsePrivate(
    DescribeEmergencyContactSettingsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeEmergencyContactSettings response element from \a xml.
 */
void DescribeEmergencyContactSettingsResponsePrivate::parseDescribeEmergencyContactSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEmergencyContactSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
