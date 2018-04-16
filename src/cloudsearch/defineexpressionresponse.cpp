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

#include "defineexpressionresponse.h"
#include "defineexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineExpressionResponse
 *
 * \brief The DefineExpressionResponse class encapsulates CloudSearch DefineExpression responses.
 *
 * \ingroup CloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::defineExpression
 */

/*!
 * @brief  Constructs a new DefineExpressionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DefineExpressionResponse::DefineExpressionResponse(
        const DefineExpressionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineExpressionResponsePrivate(this), parent)
{
    setRequest(new DefineExpressionRequest(request));
    setReply(reply);
}

const DefineExpressionRequest * DefineExpressionResponse::request() const
{
    Q_D(const DefineExpressionResponse);
    return static_cast<const DefineExpressionRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudSearch DefineExpression response.
 *
 * @param  response  Response to parse.
 */
void DefineExpressionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DefineExpressionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DefineExpressionResponsePrivate
 *
 * \brief Private implementation for DefineExpressionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DefineExpressionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DefineExpressionResponse instance.
 */
DefineExpressionResponsePrivate::DefineExpressionResponsePrivate(
    DefineExpressionResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudSearch DefineExpressionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DefineExpressionResponsePrivate::parseDefineExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineExpressionResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
