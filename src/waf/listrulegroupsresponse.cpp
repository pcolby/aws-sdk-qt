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

#include "listrulegroupsresponse.h"
#include "listrulegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListRuleGroupsResponse
 *
 * \brief The ListRuleGroupsResponse class provides an interace for WAF ListRuleGroups responses.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::listRuleGroups
 */

/*!
 * @brief  Constructs a new ListRuleGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRuleGroupsResponse::ListRuleGroupsResponse(
        const ListRuleGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRuleGroupsResponsePrivate(this), parent)
{
    setRequest(new ListRuleGroupsRequest(request));
    setReply(reply);
}

const ListRuleGroupsRequest * ListRuleGroupsResponse::request() const
{
    Q_D(const ListRuleGroupsResponse);
    return static_cast<const ListRuleGroupsRequest *>(d->request);
}

/*!
 * @brief  Parse a WAF ListRuleGroups response.
 *
 * @param  response  Response to parse.
 */
void ListRuleGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRuleGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListRuleGroupsResponsePrivate
 *
 * \brief Private implementation for ListRuleGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListRuleGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRuleGroupsResponse instance.
 */
ListRuleGroupsResponsePrivate::ListRuleGroupsResponsePrivate(
    ListRuleGroupsResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAF ListRuleGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRuleGroupsResponsePrivate::parseListRuleGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRuleGroupsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
