// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentitypoliciesresponse.h"
#include "listidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListIdentityPoliciesResponse
 * \brief The ListIdentityPoliciesResponse class provides an interace for Ses ListIdentityPolicies responses.
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
 * \sa SesClient::listIdentityPolicies
 */

/*!
 * Constructs a ListIdentityPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListIdentityPoliciesResponse::ListIdentityPoliciesResponse(
        const ListIdentityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListIdentityPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIdentityPoliciesRequest * ListIdentityPoliciesResponse::request() const
{
    Q_D(const ListIdentityPoliciesResponse);
    return static_cast<const ListIdentityPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListIdentityPolicies \a response.
 */
void ListIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListIdentityPoliciesResponsePrivate
 * \brief The ListIdentityPoliciesResponsePrivate class provides private implementation for ListIdentityPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListIdentityPoliciesResponsePrivate object with public implementation \a q.
 */
ListIdentityPoliciesResponsePrivate::ListIdentityPoliciesResponsePrivate(
    ListIdentityPoliciesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListIdentityPolicies response element from \a xml.
 */
void ListIdentityPoliciesResponsePrivate::parseListIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
