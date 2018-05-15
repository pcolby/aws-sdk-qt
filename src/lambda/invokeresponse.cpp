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

#include "invokeresponse.h"
#include "invokeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::InvokeResponse
 * \brief The InvokeResponse class provides an interace for Lambda Invoke responses.
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
 * \sa LambdaClient::invoke
 */

/*!
 * Constructs a InvokeResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeResponse::InvokeResponse(
        const InvokeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new InvokeResponsePrivate(this), parent)
{
    setRequest(new InvokeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeRequest * InvokeResponse::request() const
{
    Q_D(const InvokeResponse);
    return static_cast<const InvokeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda Invoke \a response.
 */
void InvokeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::InvokeResponsePrivate
 * \brief The InvokeResponsePrivate class provides private implementation for InvokeResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a InvokeResponsePrivate object with public implementation \a q.
 */
InvokeResponsePrivate::InvokeResponsePrivate(
    InvokeResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda Invoke response element from \a xml.
 */
void InvokeResponsePrivate::parseInvokeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
