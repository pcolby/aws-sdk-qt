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

#include "deletefunctionconcurrencyresponse.h"
#include "deletefunctionconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteFunctionConcurrencyResponse
 * \brief The DeleteFunctionConcurrencyResponse class provides an interace for Lambda DeleteFunctionConcurrency responses.
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
 * \sa LambdaClient::deleteFunctionConcurrency
 */

/*!
 * Constructs a DeleteFunctionConcurrencyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionConcurrencyResponse::DeleteFunctionConcurrencyResponse(
        const DeleteFunctionConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteFunctionConcurrencyResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionConcurrencyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionConcurrencyRequest * DeleteFunctionConcurrencyResponse::request() const
{
    Q_D(const DeleteFunctionConcurrencyResponse);
    return static_cast<const DeleteFunctionConcurrencyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda DeleteFunctionConcurrency \a response.
 */
void DeleteFunctionConcurrencyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFunctionConcurrencyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::DeleteFunctionConcurrencyResponsePrivate
 * \brief The DeleteFunctionConcurrencyResponsePrivate class provides private implementation for DeleteFunctionConcurrencyResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteFunctionConcurrencyResponsePrivate object with public implementation \a q.
 */
DeleteFunctionConcurrencyResponsePrivate::DeleteFunctionConcurrencyResponsePrivate(
    DeleteFunctionConcurrencyResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda DeleteFunctionConcurrency response element from \a xml.
 */
void DeleteFunctionConcurrencyResponsePrivate::parseDeleteFunctionConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionConcurrencyResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
