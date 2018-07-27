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

#include "listversionsbyfunctionresponse.h"
#include "listversionsbyfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListVersionsByFunctionResponse
 * \brief The ListVersionsByFunctionResponse class provides an interace for Lambda ListVersionsByFunction responses.
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
 * \sa LambdaClient::listVersionsByFunction
 */

/*!
 * Constructs a ListVersionsByFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
ListVersionsByFunctionResponse::ListVersionsByFunctionResponse(
        const ListVersionsByFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListVersionsByFunctionResponsePrivate(this), parent)
{
    setRequest(new ListVersionsByFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVersionsByFunctionRequest * ListVersionsByFunctionResponse::request() const
{
    Q_D(const ListVersionsByFunctionResponse);
    return static_cast<const ListVersionsByFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda ListVersionsByFunction \a response.
 */
void ListVersionsByFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVersionsByFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListVersionsByFunctionResponsePrivate
 * \brief The ListVersionsByFunctionResponsePrivate class provides private implementation for ListVersionsByFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListVersionsByFunctionResponsePrivate object with public implementation \a q.
 */
ListVersionsByFunctionResponsePrivate::ListVersionsByFunctionResponsePrivate(
    ListVersionsByFunctionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListVersionsByFunction response element from \a xml.
 */
void ListVersionsByFunctionResponsePrivate::parseListVersionsByFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVersionsByFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
