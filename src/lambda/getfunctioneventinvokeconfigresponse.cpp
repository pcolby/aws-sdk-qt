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

#include "getfunctioneventinvokeconfigresponse.h"
#include "getfunctioneventinvokeconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetFunctionEventInvokeConfigResponse
 * \brief The GetFunctionEventInvokeConfigResponse class provides an interace for Lambda GetFunctionEventInvokeConfig responses.
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
 * \sa LambdaClient::getFunctionEventInvokeConfig
 */

/*!
 * Constructs a GetFunctionEventInvokeConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionEventInvokeConfigResponse::GetFunctionEventInvokeConfigResponse(
        const GetFunctionEventInvokeConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionEventInvokeConfigResponsePrivate(this), parent)
{
    setRequest(new GetFunctionEventInvokeConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionEventInvokeConfigRequest * GetFunctionEventInvokeConfigResponse::request() const
{
    Q_D(const GetFunctionEventInvokeConfigResponse);
    return static_cast<const GetFunctionEventInvokeConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetFunctionEventInvokeConfig \a response.
 */
void GetFunctionEventInvokeConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionEventInvokeConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetFunctionEventInvokeConfigResponsePrivate
 * \brief The GetFunctionEventInvokeConfigResponsePrivate class provides private implementation for GetFunctionEventInvokeConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetFunctionEventInvokeConfigResponsePrivate object with public implementation \a q.
 */
GetFunctionEventInvokeConfigResponsePrivate::GetFunctionEventInvokeConfigResponsePrivate(
    GetFunctionEventInvokeConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetFunctionEventInvokeConfig response element from \a xml.
 */
void GetFunctionEventInvokeConfigResponsePrivate::parseGetFunctionEventInvokeConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionEventInvokeConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
