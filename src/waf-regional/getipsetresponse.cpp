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

#include "getipsetresponse.h"
#include "getipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetIPSetResponse
 *
 * \brief The GetIPSetResponse class encapsulates WAFRegional GetIPSet responses.
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
 * \sa WAFRegionalClient::getIPSet
 */

/*!
 * @brief  Constructs a new GetIPSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIPSetResponse::GetIPSetResponse(
        const GetIPSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetIPSetResponsePrivate(this), parent)
{
    setRequest(new GetIPSetRequest(request));
    setReply(reply);
}

const GetIPSetRequest * GetIPSetResponse::request() const
{
    Q_D(const GetIPSetResponse);
    return static_cast<const GetIPSetRequest *>(d->request);
}

/*!
 * @brief  Parse a WAFRegional GetIPSet response.
 *
 * @param  response  Response to parse.
 */
void GetIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIPSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetIPSetResponsePrivate
 *
 * \brief Private implementation for GetIPSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetIPSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIPSetResponse instance.
 */
GetIPSetResponsePrivate::GetIPSetResponsePrivate(
    GetIPSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAFRegional GetIPSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIPSetResponsePrivate::parseGetIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIPSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
