// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ResendContactReachabilityEmailResponse);
    return static_cast<const ResendContactReachabilityEmailRequest *>(d->request);
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
