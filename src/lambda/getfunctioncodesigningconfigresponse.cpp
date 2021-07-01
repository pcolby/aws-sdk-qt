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

#include "getfunctioncodesigningconfigresponse.h"
#include "getfunctioncodesigningconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetFunctionCodeSigningConfigResponse
 * \brief The GetFunctionCodeSigningConfigResponse class provides an interace for Lambda GetFunctionCodeSigningConfig responses.
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
 * \sa LambdaClient::getFunctionCodeSigningConfig
 */

/*!
 * Constructs a GetFunctionCodeSigningConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionCodeSigningConfigResponse::GetFunctionCodeSigningConfigResponse(
        const GetFunctionCodeSigningConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetFunctionCodeSigningConfigResponsePrivate(this), parent)
{
    setRequest(new GetFunctionCodeSigningConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionCodeSigningConfigRequest * GetFunctionCodeSigningConfigResponse::request() const
{
    Q_D(const GetFunctionCodeSigningConfigResponse);
    return static_cast<const GetFunctionCodeSigningConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetFunctionCodeSigningConfig \a response.
 */
void GetFunctionCodeSigningConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionCodeSigningConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetFunctionCodeSigningConfigResponsePrivate
 * \brief The GetFunctionCodeSigningConfigResponsePrivate class provides private implementation for GetFunctionCodeSigningConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetFunctionCodeSigningConfigResponsePrivate object with public implementation \a q.
 */
GetFunctionCodeSigningConfigResponsePrivate::GetFunctionCodeSigningConfigResponsePrivate(
    GetFunctionCodeSigningConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetFunctionCodeSigningConfig response element from \a xml.
 */
void GetFunctionCodeSigningConfigResponsePrivate::parseGetFunctionCodeSigningConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionCodeSigningConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
