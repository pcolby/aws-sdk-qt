// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomaincontactprivacyresponse.h"
#include "updatedomaincontactprivacyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyResponse
 * \brief The UpdateDomainContactPrivacyResponse class provides an interace for Route53Domains UpdateDomainContactPrivacy responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContactPrivacy
 */

/*!
 * Constructs a UpdateDomainContactPrivacyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainContactPrivacyResponse::UpdateDomainContactPrivacyResponse(
        const UpdateDomainContactPrivacyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactPrivacyResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactPrivacyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainContactPrivacyRequest * UpdateDomainContactPrivacyResponse::request() const
{
    Q_D(const UpdateDomainContactPrivacyResponse);
    return static_cast<const UpdateDomainContactPrivacyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateDomainContactPrivacy \a response.
 */
void UpdateDomainContactPrivacyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainContactPrivacyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyResponsePrivate
 * \brief The UpdateDomainContactPrivacyResponsePrivate class provides private implementation for UpdateDomainContactPrivacyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactPrivacyResponsePrivate object with public implementation \a q.
 */
UpdateDomainContactPrivacyResponsePrivate::UpdateDomainContactPrivacyResponsePrivate(
    UpdateDomainContactPrivacyResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateDomainContactPrivacy response element from \a xml.
 */
void UpdateDomainContactPrivacyResponsePrivate::parseUpdateDomainContactPrivacyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactPrivacyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
