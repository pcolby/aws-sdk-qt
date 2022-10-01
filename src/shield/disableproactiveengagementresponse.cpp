// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableproactiveengagementresponse.h"
#include "disableproactiveengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableProactiveEngagementResponse
 * \brief The DisableProactiveEngagementResponse class provides an interace for Shield DisableProactiveEngagement responses.
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
 * \sa ShieldClient::disableProactiveEngagement
 */

/*!
 * Constructs a DisableProactiveEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
DisableProactiveEngagementResponse::DisableProactiveEngagementResponse(
        const DisableProactiveEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisableProactiveEngagementResponsePrivate(this), parent)
{
    setRequest(new DisableProactiveEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableProactiveEngagementRequest * DisableProactiveEngagementResponse::request() const
{
    Q_D(const DisableProactiveEngagementResponse);
    return static_cast<const DisableProactiveEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DisableProactiveEngagement \a response.
 */
void DisableProactiveEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableProactiveEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisableProactiveEngagementResponsePrivate
 * \brief The DisableProactiveEngagementResponsePrivate class provides private implementation for DisableProactiveEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableProactiveEngagementResponsePrivate object with public implementation \a q.
 */
DisableProactiveEngagementResponsePrivate::DisableProactiveEngagementResponsePrivate(
    DisableProactiveEngagementResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisableProactiveEngagement response element from \a xml.
 */
void DisableProactiveEngagementResponsePrivate::parseDisableProactiveEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableProactiveEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
