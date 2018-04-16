/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getregexpatternsetresponse.h"
#include "getregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetRegexPatternSetResponse
 *
 * \brief The GetRegexPatternSetResponse class encapsulates WAFRegional GetRegexPatternSet responses.
 *
 * \ingroup WAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getRegexPatternSet
 */

/*!
 * @brief  Constructs a new GetRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexPatternSetResponse::GetRegexPatternSetResponse(
        const GetRegexPatternSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexPatternSetRequest(request));
    setReply(reply);
}

const GetRegexPatternSetRequest * GetRegexPatternSetResponse::request() const
{
    Q_D(const GetRegexPatternSetResponse);
    return static_cast<const GetRegexPatternSetRequest *>(d->request);
}

/*!
 * @brief  Parse a WAFRegional GetRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void GetRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRegexPatternSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetRegexPatternSetResponsePrivate
 *
 * \brief Private implementation for GetRegexPatternSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegexPatternSetResponse instance.
 */
GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponsePrivate(
    GetRegexPatternSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAFRegional GetRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegexPatternSetResponsePrivate::parseGetRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
