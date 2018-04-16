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

#include "deletesqlinjectionmatchsetresponse.h"
#include "deletesqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::DeleteSqlInjectionMatchSetResponse
 *
 * \brief The DeleteSqlInjectionMatchSetResponse class encapsulates WAFRegional DeleteSqlInjectionMatchSet responses.
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
 * \sa WAFRegionalClient::deleteSqlInjectionMatchSet
 */

/*!
 * @brief  Constructs a new DeleteSqlInjectionMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSqlInjectionMatchSetResponse::DeleteSqlInjectionMatchSetResponse(
        const DeleteSqlInjectionMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

const DeleteSqlInjectionMatchSetRequest * DeleteSqlInjectionMatchSetResponse::request() const
{
    Q_D(const DeleteSqlInjectionMatchSetResponse);
    return static_cast<const DeleteSqlInjectionMatchSetRequest *>(d->request);
}

/*!
 * @brief  Parse a WAFRegional DeleteSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSqlInjectionMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteSqlInjectionMatchSetResponsePrivate
 *
 * \brief Private implementation for DeleteSqlInjectionMatchSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSqlInjectionMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSqlInjectionMatchSetResponse instance.
 */
DeleteSqlInjectionMatchSetResponsePrivate::DeleteSqlInjectionMatchSetResponsePrivate(
    DeleteSqlInjectionMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WAFRegional DeleteSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSqlInjectionMatchSetResponsePrivate::parseDeleteSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSqlInjectionMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
