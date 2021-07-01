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

#include "putfunctioncodesigningconfigresponse.h"
#include "putfunctioncodesigningconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::PutFunctionCodeSigningConfigResponse
 * \brief The PutFunctionCodeSigningConfigResponse class provides an interace for Lambda PutFunctionCodeSigningConfig responses.
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
 * \sa LambdaClient::putFunctionCodeSigningConfig
 */

/*!
 * Constructs a PutFunctionCodeSigningConfigResponse object for \a reply to \a request, with parent \a parent.
 */
PutFunctionCodeSigningConfigResponse::PutFunctionCodeSigningConfigResponse(
        const PutFunctionCodeSigningConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PutFunctionCodeSigningConfigResponsePrivate(this), parent)
{
    setRequest(new PutFunctionCodeSigningConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFunctionCodeSigningConfigRequest * PutFunctionCodeSigningConfigResponse::request() const
{
    Q_D(const PutFunctionCodeSigningConfigResponse);
    return static_cast<const PutFunctionCodeSigningConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda PutFunctionCodeSigningConfig \a response.
 */
void PutFunctionCodeSigningConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFunctionCodeSigningConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::PutFunctionCodeSigningConfigResponsePrivate
 * \brief The PutFunctionCodeSigningConfigResponsePrivate class provides private implementation for PutFunctionCodeSigningConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a PutFunctionCodeSigningConfigResponsePrivate object with public implementation \a q.
 */
PutFunctionCodeSigningConfigResponsePrivate::PutFunctionCodeSigningConfigResponsePrivate(
    PutFunctionCodeSigningConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda PutFunctionCodeSigningConfig response element from \a xml.
 */
void PutFunctionCodeSigningConfigResponsePrivate::parsePutFunctionCodeSigningConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFunctionCodeSigningConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
