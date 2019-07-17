/*
    Copyright 2013-2019 Paul Colby

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

#include "listfunctionsresponse.h"
#include "listfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListFunctionsResponse
 * \brief The ListFunctionsResponse class provides an interace for Lambda ListFunctions responses.
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
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::listFunctions
 */

/*!
 * Constructs a ListFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionsResponse::ListFunctionsResponse(
        const ListFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionsRequest * ListFunctionsResponse::request() const
{
    Q_D(const ListFunctionsResponse);
    return static_cast<const ListFunctionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda ListFunctions \a response.
 */
void ListFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListFunctionsResponsePrivate
 * \brief The ListFunctionsResponsePrivate class provides private implementation for ListFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListFunctionsResponsePrivate object with public implementation \a q.
 */
ListFunctionsResponsePrivate::ListFunctionsResponsePrivate(
    ListFunctionsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListFunctions response element from \a xml.
 */
void ListFunctionsResponsePrivate::parseListFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
