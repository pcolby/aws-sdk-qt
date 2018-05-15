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

#include "getgeomatchsetresponse.h"
#include "getgeomatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetGeoMatchSetResponse
 * \brief The GetGeoMatchSetResponse class provides an interace for WAF GetGeoMatchSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getGeoMatchSet
 */

/*!
 * Constructs a GetGeoMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeoMatchSetResponse::GetGeoMatchSetResponse(
        const GetGeoMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new GetGeoMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetGeoMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeoMatchSetRequest * GetGeoMatchSetResponse::request() const
{
    Q_D(const GetGeoMatchSetResponse);
    return static_cast<const GetGeoMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF GetGeoMatchSet \a response.
 */
void GetGeoMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeoMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::GetGeoMatchSetResponsePrivate
 * \brief The GetGeoMatchSetResponsePrivate class provides private implementation for GetGeoMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetGeoMatchSetResponsePrivate object with public implementation \a q.
 */
GetGeoMatchSetResponsePrivate::GetGeoMatchSetResponsePrivate(
    GetGeoMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF GetGeoMatchSet response element from \a xml.
 */
void GetGeoMatchSetResponsePrivate::parseGetGeoMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeoMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
