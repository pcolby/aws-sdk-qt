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

#include "getfunctionconfigurationresponse.h"
#include "getfunctionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetFunctionConfigurationResponse
 * \brief The GetFunctionConfigurationResponse class provides an interace for Lambda GetFunctionConfiguration responses.
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
 * \sa LambdaClient::getFunctionConfiguration
 */

/*!
 * Constructs a GetFunctionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionConfigurationResponse::GetFunctionConfigurationResponse(
        const GetFunctionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetFunctionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionConfigurationRequest * GetFunctionConfigurationResponse::request() const
{
    Q_D(const GetFunctionConfigurationResponse);
    return static_cast<const GetFunctionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetFunctionConfiguration \a response.
 */
void GetFunctionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetFunctionConfigurationResponsePrivate
 * \brief The GetFunctionConfigurationResponsePrivate class provides private implementation for GetFunctionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetFunctionConfigurationResponsePrivate object with public implementation \a q.
 */
GetFunctionConfigurationResponsePrivate::GetFunctionConfigurationResponsePrivate(
    GetFunctionConfigurationResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetFunctionConfiguration response element from \a xml.
 */
void GetFunctionConfigurationResponsePrivate::parseGetFunctionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
