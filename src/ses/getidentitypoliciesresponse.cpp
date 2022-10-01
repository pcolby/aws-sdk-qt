// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitypoliciesresponse.h"
#include "getidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityPoliciesResponse
 * \brief The GetIdentityPoliciesResponse class provides an interace for Ses GetIdentityPolicies responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getIdentityPolicies
 */

/*!
 * Constructs a GetIdentityPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityPoliciesResponse::GetIdentityPoliciesResponse(
        const GetIdentityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityPoliciesRequest * GetIdentityPoliciesResponse::request() const
{
    Q_D(const GetIdentityPoliciesResponse);
    return static_cast<const GetIdentityPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetIdentityPolicies \a response.
 */
void GetIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetIdentityPoliciesResponsePrivate
 * \brief The GetIdentityPoliciesResponsePrivate class provides private implementation for GetIdentityPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityPoliciesResponsePrivate object with public implementation \a q.
 */
GetIdentityPoliciesResponsePrivate::GetIdentityPoliciesResponsePrivate(
    GetIdentityPoliciesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetIdentityPolicies response element from \a xml.
 */
void GetIdentityPoliciesResponsePrivate::parseGetIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
