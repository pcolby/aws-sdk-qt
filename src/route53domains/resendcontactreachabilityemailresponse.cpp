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

#include "resendcontactreachabilityemailresponse.h"
#include "resendcontactreachabilityemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ResendContactReachabilityEmailResponse
 * \brief The ResendContactReachabilityEmailResponse class provides an interace for Route53Domains ResendContactReachabilityEmail responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::resendContactReachabilityEmail
 */

/*!
 * Constructs a ResendContactReachabilityEmailResponse object for \a reply to \a request, with parent \a parent.
 */
ResendContactReachabilityEmailResponse::ResendContactReachabilityEmailResponse(
        const ResendContactReachabilityEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ResendContactReachabilityEmailResponsePrivate(this), parent)
{
    setRequest(new ResendContactReachabilityEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResendContactReachabilityEmailRequest * ResendContactReachabilityEmailResponse::request() const
{
    return static_cast<const ResendContactReachabilityEmailRequest *>(Route53DomainsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Route53Domains ResendContactReachabilityEmail \a response.
 */
void ResendContactReachabilityEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResendContactReachabilityEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ResendContactReachabilityEmailResponsePrivate
 * \brief The ResendContactReachabilityEmailResponsePrivate class provides private implementation for ResendContactReachabilityEmailResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ResendContactReachabilityEmailResponsePrivate object with public implementation \a q.
 */
ResendContactReachabilityEmailResponsePrivate::ResendContactReachabilityEmailResponsePrivate(
    ResendContactReachabilityEmailResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ResendContactReachabilityEmail response element from \a xml.
 */
void ResendContactReachabilityEmailResponsePrivate::parseResendContactReachabilityEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendContactReachabilityEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
