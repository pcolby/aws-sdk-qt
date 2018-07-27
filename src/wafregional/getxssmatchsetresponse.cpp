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

#include "getxssmatchsetresponse.h"
#include "getxssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetXssMatchSetResponse
 * \brief The GetXssMatchSetResponse class provides an interace for WAFRegional GetXssMatchSet responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getXssMatchSet
 */

/*!
 * Constructs a GetXssMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetXssMatchSetResponse::GetXssMatchSetResponse(
        const GetXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetXssMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetXssMatchSetRequest * GetXssMatchSetResponse::request() const
{
    Q_D(const GetXssMatchSetResponse);
    return static_cast<const GetXssMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional GetXssMatchSet \a response.
 */
void GetXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetXssMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::GetXssMatchSetResponsePrivate
 * \brief The GetXssMatchSetResponsePrivate class provides private implementation for GetXssMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetXssMatchSetResponsePrivate object with public implementation \a q.
 */
GetXssMatchSetResponsePrivate::GetXssMatchSetResponsePrivate(
    GetXssMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional GetXssMatchSet response element from \a xml.
 */
void GetXssMatchSetResponsePrivate::parseGetXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetXssMatchSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
