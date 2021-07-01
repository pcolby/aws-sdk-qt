/*
    Copyright 2013-2021 Paul Colby

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

#include "getfunctionconcurrencyresponse.h"
#include "getfunctionconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetFunctionConcurrencyResponse
 * \brief The GetFunctionConcurrencyResponse class provides an interace for Lambda GetFunctionConcurrency responses.
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
 * \sa LambdaClient::getFunctionConcurrency
 */

/*!
 * Constructs a GetFunctionConcurrencyResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionConcurrencyResponse::GetFunctionConcurrencyResponse(
        const GetFunctionConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionConcurrencyResponsePrivate(this), parent)
{
    setRequest(new GetFunctionConcurrencyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionConcurrencyRequest * GetFunctionConcurrencyResponse::request() const
{
    Q_D(const GetFunctionConcurrencyResponse);
    return static_cast<const GetFunctionConcurrencyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetFunctionConcurrency \a response.
 */
void GetFunctionConcurrencyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionConcurrencyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetFunctionConcurrencyResponsePrivate
 * \brief The GetFunctionConcurrencyResponsePrivate class provides private implementation for GetFunctionConcurrencyResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetFunctionConcurrencyResponsePrivate object with public implementation \a q.
 */
GetFunctionConcurrencyResponsePrivate::GetFunctionConcurrencyResponsePrivate(
    GetFunctionConcurrencyResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetFunctionConcurrency response element from \a xml.
 */
void GetFunctionConcurrencyResponsePrivate::parseGetFunctionConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionConcurrencyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
