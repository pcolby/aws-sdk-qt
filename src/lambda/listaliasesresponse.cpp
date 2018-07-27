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

#include "listaliasesresponse.h"
#include "listaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListAliasesResponse
 * \brief The ListAliasesResponse class provides an interace for Lambda ListAliases responses.
 *
 * \inmodule QtAwsLambda
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
 * Constructs a ListAliasesResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const ListAliasesRequest * ListAliasesResponse::request() const
{
    Q_D(const ListAliasesResponse);
    return static_cast<const ListAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda ListAliases \a response.
 */
void ListAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListAliasesResponsePrivate
 * \brief The ListAliasesResponsePrivate class provides private implementation for ListAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListAliasesResponsePrivate object with public implementation \a q.
 */
ListAliasesResponsePrivate::ListAliasesResponsePrivate(
    ListAliasesResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListAliases response element from \a xml.
 */
void ListAliasesResponsePrivate::parseListAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
