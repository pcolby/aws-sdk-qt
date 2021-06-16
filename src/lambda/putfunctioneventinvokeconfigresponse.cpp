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

#include "putfunctioneventinvokeconfigresponse.h"
#include "putfunctioneventinvokeconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PutFunctionEventInvokeConfigResponse
 * \brief The PutFunctionEventInvokeConfigResponse class provides an interace for Lambda PutFunctionEventInvokeConfig responses.
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
 * \sa LambdaClient::putFunctionEventInvokeConfig
 */

/*!
 * Constructs a PutFunctionEventInvokeConfigResponse object for \a reply to \a request, with parent \a parent.
 */
PutFunctionEventInvokeConfigResponse::PutFunctionEventInvokeConfigResponse(
        const PutFunctionEventInvokeConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PutFunctionEventInvokeConfigResponsePrivate(this), parent)
{
    setRequest(new PutFunctionEventInvokeConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFunctionEventInvokeConfigRequest * PutFunctionEventInvokeConfigResponse::request() const
{
    Q_D(const PutFunctionEventInvokeConfigResponse);
    return static_cast<const PutFunctionEventInvokeConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda PutFunctionEventInvokeConfig \a response.
 */
void PutFunctionEventInvokeConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFunctionEventInvokeConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::PutFunctionEventInvokeConfigResponsePrivate
 * \brief The PutFunctionEventInvokeConfigResponsePrivate class provides private implementation for PutFunctionEventInvokeConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PutFunctionEventInvokeConfigResponsePrivate object with public implementation \a q.
 */
PutFunctionEventInvokeConfigResponsePrivate::PutFunctionEventInvokeConfigResponsePrivate(
    PutFunctionEventInvokeConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda PutFunctionEventInvokeConfig response element from \a xml.
 */
void PutFunctionEventInvokeConfigResponsePrivate::parsePutFunctionEventInvokeConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFunctionEventInvokeConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
