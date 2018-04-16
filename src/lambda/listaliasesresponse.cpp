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

#include "listaliasesresponse.h"
#include "listaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListAliasesResponse
 *
 * \brief The ListAliasesResponse class provides an interace for Lambda ListAliases responses.
 *
 * \ingroup Lambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::listAliases
 */

/*!
 * @brief  Constructs a new ListAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAliasesResponse::ListAliasesResponse(
        const ListAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListAliasesResponsePrivate(this), parent)
{
    setRequest(new ListAliasesRequest(request));
    setReply(reply);
}

const ListAliasesRequest * ListAliasesResponse::request() const
{
    Q_D(const ListAliasesResponse);
    return static_cast<const ListAliasesRequest *>(d->request);
}

/*!
 * @brief  Parse a Lambda ListAliases response.
 *
 * @param  response  Response to parse.
 */
void ListAliasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListAliasesResponsePrivate
 *
 * \brief Private implementation for ListAliasesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAliasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAliasesResponse instance.
 */
ListAliasesResponsePrivate::ListAliasesResponsePrivate(
    ListAliasesResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lambda ListAliasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAliasesResponsePrivate::parseListAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAliasesResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
