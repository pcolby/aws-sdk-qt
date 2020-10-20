/*
    Copyright 2013-2020 Paul Colby

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

#include "getbytematchsetresponse.h"
#include "getbytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetByteMatchSetResponse
 * \brief The GetByteMatchSetResponse class provides an interace for WAF GetByteMatchSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getByteMatchSet
 */

/*!
 * Constructs a GetByteMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetByteMatchSetResponse::GetByteMatchSetResponse(
        const GetByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new GetByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetByteMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetByteMatchSetRequest * GetByteMatchSetResponse::request() const
{
    Q_D(const GetByteMatchSetResponse);
    return static_cast<const GetByteMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF GetByteMatchSet \a response.
 */
void GetByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::GetByteMatchSetResponsePrivate
 * \brief The GetByteMatchSetResponsePrivate class provides private implementation for GetByteMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetByteMatchSetResponsePrivate object with public implementation \a q.
 */
GetByteMatchSetResponsePrivate::GetByteMatchSetResponsePrivate(
    GetByteMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF GetByteMatchSet response element from \a xml.
 */
void GetByteMatchSetResponsePrivate::parseGetByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetByteMatchSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAF
} // namespace QtAws
