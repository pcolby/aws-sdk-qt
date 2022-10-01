// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableproactiveengagementresponse.h"
#include "enableproactiveengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::EnableProactiveEngagementResponse
 * \brief The EnableProactiveEngagementResponse class provides an interace for Shield EnableProactiveEngagement responses.
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
 * \sa ShieldClient::enableProactiveEngagement
 */

/*!
 * Constructs a EnableProactiveEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
EnableProactiveEngagementResponse::EnableProactiveEngagementResponse(
        const EnableProactiveEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new EnableProactiveEngagementResponsePrivate(this), parent)
{
    setRequest(new EnableProactiveEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableProactiveEngagementRequest * EnableProactiveEngagementResponse::request() const
{
    Q_D(const EnableProactiveEngagementResponse);
    return static_cast<const EnableProactiveEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield EnableProactiveEngagement \a response.
 */
void EnableProactiveEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableProactiveEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::EnableProactiveEngagementResponsePrivate
 * \brief The EnableProactiveEngagementResponsePrivate class provides private implementation for EnableProactiveEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a EnableProactiveEngagementResponsePrivate object with public implementation \a q.
 */
EnableProactiveEngagementResponsePrivate::EnableProactiveEngagementResponsePrivate(
    EnableProactiveEngagementResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield EnableProactiveEngagement response element from \a xml.
 */
void EnableProactiveEngagementResponsePrivate::parseEnableProactiveEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableProactiveEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
