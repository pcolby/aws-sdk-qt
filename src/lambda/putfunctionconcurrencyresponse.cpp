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

#include "putfunctionconcurrencyresponse.h"
#include "putfunctionconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PutFunctionConcurrencyResponse
 * \brief The PutFunctionConcurrencyResponse class provides an interace for Lambda PutFunctionConcurrency responses.
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
 * \sa LambdaClient::putFunctionConcurrency
 */

/*!
 * Constructs a PutFunctionConcurrencyResponse object for \a reply to \a request, with parent \a parent.
 */
PutFunctionConcurrencyResponse::PutFunctionConcurrencyResponse(
        const PutFunctionConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PutFunctionConcurrencyResponsePrivate(this), parent)
{
    setRequest(new PutFunctionConcurrencyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFunctionConcurrencyRequest * PutFunctionConcurrencyResponse::request() const
{
    Q_D(const PutFunctionConcurrencyResponse);
    return static_cast<const PutFunctionConcurrencyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda PutFunctionConcurrency \a response.
 */
void PutFunctionConcurrencyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFunctionConcurrencyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::PutFunctionConcurrencyResponsePrivate
 * \brief The PutFunctionConcurrencyResponsePrivate class provides private implementation for PutFunctionConcurrencyResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PutFunctionConcurrencyResponsePrivate object with public implementation \a q.
 */
PutFunctionConcurrencyResponsePrivate::PutFunctionConcurrencyResponsePrivate(
    PutFunctionConcurrencyResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda PutFunctionConcurrency response element from \a xml.
 */
void PutFunctionConcurrencyResponsePrivate::parsePutFunctionConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFunctionConcurrencyResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
