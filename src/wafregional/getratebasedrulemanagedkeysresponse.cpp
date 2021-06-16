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

#include "getratebasedrulemanagedkeysresponse.h"
#include "getratebasedrulemanagedkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetRateBasedRuleManagedKeysResponse
 * \brief The GetRateBasedRuleManagedKeysResponse class provides an interace for WAFRegional GetRateBasedRuleManagedKeys responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getRateBasedRuleManagedKeys
 */

/*!
 * Constructs a GetRateBasedRuleManagedKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetRateBasedRuleManagedKeysResponse::GetRateBasedRuleManagedKeysResponse(
        const GetRateBasedRuleManagedKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRateBasedRuleManagedKeysResponsePrivate(this), parent)
{
    setRequest(new GetRateBasedRuleManagedKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRateBasedRuleManagedKeysRequest * GetRateBasedRuleManagedKeysResponse::request() const
{
    Q_D(const GetRateBasedRuleManagedKeysResponse);
    return static_cast<const GetRateBasedRuleManagedKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional GetRateBasedRuleManagedKeys \a response.
 */
void GetRateBasedRuleManagedKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRateBasedRuleManagedKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::GetRateBasedRuleManagedKeysResponsePrivate
 * \brief The GetRateBasedRuleManagedKeysResponsePrivate class provides private implementation for GetRateBasedRuleManagedKeysResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetRateBasedRuleManagedKeysResponsePrivate object with public implementation \a q.
 */
GetRateBasedRuleManagedKeysResponsePrivate::GetRateBasedRuleManagedKeysResponsePrivate(
    GetRateBasedRuleManagedKeysResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional GetRateBasedRuleManagedKeys response element from \a xml.
 */
void GetRateBasedRuleManagedKeysResponsePrivate::parseGetRateBasedRuleManagedKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRateBasedRuleManagedKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
