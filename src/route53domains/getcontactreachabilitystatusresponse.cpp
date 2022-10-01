// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactreachabilitystatusresponse.h"
#include "getcontactreachabilitystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusResponse
 * \brief The GetContactReachabilityStatusResponse class provides an interace for Route53Domains GetContactReachabilityStatus responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getContactReachabilityStatus
 */

/*!
 * Constructs a GetContactReachabilityStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactReachabilityStatusResponse::GetContactReachabilityStatusResponse(
        const GetContactReachabilityStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetContactReachabilityStatusResponsePrivate(this), parent)
{
    setRequest(new GetContactReachabilityStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactReachabilityStatusRequest * GetContactReachabilityStatusResponse::request() const
{
    Q_D(const GetContactReachabilityStatusResponse);
    return static_cast<const GetContactReachabilityStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains GetContactReachabilityStatus \a response.
 */
void GetContactReachabilityStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactReachabilityStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusResponsePrivate
 * \brief The GetContactReachabilityStatusResponsePrivate class provides private implementation for GetContactReachabilityStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetContactReachabilityStatusResponsePrivate object with public implementation \a q.
 */
GetContactReachabilityStatusResponsePrivate::GetContactReachabilityStatusResponsePrivate(
    GetContactReachabilityStatusResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains GetContactReachabilityStatus response element from \a xml.
 */
void GetContactReachabilityStatusResponsePrivate::parseGetContactReachabilityStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactReachabilityStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
