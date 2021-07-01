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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
