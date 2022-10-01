// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrievedomainauthcoderesponse.h"
#include "retrievedomainauthcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeResponse
 * \brief The RetrieveDomainAuthCodeResponse class provides an interace for Route53Domains RetrieveDomainAuthCode responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::retrieveDomainAuthCode
 */

/*!
 * Constructs a RetrieveDomainAuthCodeResponse object for \a reply to \a request, with parent \a parent.
 */
RetrieveDomainAuthCodeResponse::RetrieveDomainAuthCodeResponse(
        const RetrieveDomainAuthCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RetrieveDomainAuthCodeResponsePrivate(this), parent)
{
    setRequest(new RetrieveDomainAuthCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetrieveDomainAuthCodeRequest * RetrieveDomainAuthCodeResponse::request() const
{
    Q_D(const RetrieveDomainAuthCodeResponse);
    return static_cast<const RetrieveDomainAuthCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains RetrieveDomainAuthCode \a response.
 */
void RetrieveDomainAuthCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetrieveDomainAuthCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeResponsePrivate
 * \brief The RetrieveDomainAuthCodeResponsePrivate class provides private implementation for RetrieveDomainAuthCodeResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RetrieveDomainAuthCodeResponsePrivate object with public implementation \a q.
 */
RetrieveDomainAuthCodeResponsePrivate::RetrieveDomainAuthCodeResponsePrivate(
    RetrieveDomainAuthCodeResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains RetrieveDomainAuthCode response element from \a xml.
 */
void RetrieveDomainAuthCodeResponsePrivate::parseRetrieveDomainAuthCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveDomainAuthCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
