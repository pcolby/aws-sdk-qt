/*
    Copyright 2013-2019 Paul Colby

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

#include "listidentitypoliciesresponse.h"
#include "listidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListIdentityPoliciesResponse
 * \brief The ListIdentityPoliciesResponse class provides an interace for SES ListIdentityPolicies responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * Parses a successful SES ListIdentityPolicies \a response.
 */
void ListIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::ListIdentityPoliciesResponsePrivate
 * \brief The ListIdentityPoliciesResponsePrivate class provides private implementation for ListIdentityPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ListIdentityPoliciesResponsePrivate object with public implementation \a q.
 */
ListIdentityPoliciesResponsePrivate::ListIdentityPoliciesResponsePrivate(
    ListIdentityPoliciesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES ListIdentityPolicies response element from \a xml.
 */
void ListIdentityPoliciesResponsePrivate::parseListIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
