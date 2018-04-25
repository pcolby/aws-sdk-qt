/*
    Copyright 2013-2018 Paul Colby

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

#include "listratebasedrulesresponse.h"
#include "listratebasedrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListRateBasedRulesResponse
 * \brief The ListRateBasedRulesResponse class provides an interace for WAF ListRateBasedRules responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::listRateBasedRules
 */

/*!
 * Constructs a ListRateBasedRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRateBasedRulesResponse::ListRateBasedRulesResponse(
        const ListRateBasedRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new ListRateBasedRulesResponsePrivate(this), parent)
{
    setRequest(new ListRateBasedRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRateBasedRulesRequest * ListRateBasedRulesResponse::request() const
{
    Q_D(const ListRateBasedRulesResponse);
    return static_cast<const ListRateBasedRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF ListRateBasedRules \a response.
 */
void ListRateBasedRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRateBasedRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::ListRateBasedRulesResponsePrivate
 * \brief The ListRateBasedRulesResponsePrivate class provides private implementation for ListRateBasedRulesResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a ListRateBasedRulesResponsePrivate object with public implementation \a q.
 */
ListRateBasedRulesResponsePrivate::ListRateBasedRulesResponsePrivate(
    ListRateBasedRulesResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF ListRateBasedRules response element from \a xml.
 */
void ListRateBasedRulesResponsePrivate::parseListRateBasedRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRateBasedRulesResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
