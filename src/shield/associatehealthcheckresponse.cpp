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

#include "associatehealthcheckresponse.h"
#include "associatehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateHealthCheckResponse
 * \brief The AssociateHealthCheckResponse class provides an interace for Shield AssociateHealthCheck responses.
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
 * \sa ShieldClient::associateHealthCheck
 */

/*!
 * Constructs a AssociateHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateHealthCheckResponse::AssociateHealthCheckResponse(
        const AssociateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new AssociateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new AssociateHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateHealthCheckRequest * AssociateHealthCheckResponse::request() const
{
    Q_D(const AssociateHealthCheckResponse);
    return static_cast<const AssociateHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield AssociateHealthCheck \a response.
 */
void AssociateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::AssociateHealthCheckResponsePrivate
 * \brief The AssociateHealthCheckResponsePrivate class provides private implementation for AssociateHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateHealthCheckResponsePrivate object with public implementation \a q.
 */
AssociateHealthCheckResponsePrivate::AssociateHealthCheckResponsePrivate(
    AssociateHealthCheckResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield AssociateHealthCheck response element from \a xml.
 */
void AssociateHealthCheckResponsePrivate::parseAssociateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateHealthCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
