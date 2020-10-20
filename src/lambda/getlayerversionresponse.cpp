/*
    Copyright 2013-2020 Paul Colby

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

#include "getlayerversionresponse.h"
#include "getlayerversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetLayerVersionResponse
 * \brief The GetLayerVersionResponse class provides an interace for Lambda GetLayerVersion responses.
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
 * \sa LambdaClient::getLayerVersion
 */

/*!
 * Constructs a GetLayerVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetLayerVersionResponse::GetLayerVersionResponse(
        const GetLayerVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetLayerVersionResponsePrivate(this), parent)
{
    setRequest(new GetLayerVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLayerVersionRequest * GetLayerVersionResponse::request() const
{
    Q_D(const GetLayerVersionResponse);
    return static_cast<const GetLayerVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetLayerVersion \a response.
 */
void GetLayerVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLayerVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetLayerVersionResponsePrivate
 * \brief The GetLayerVersionResponsePrivate class provides private implementation for GetLayerVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetLayerVersionResponsePrivate object with public implementation \a q.
 */
GetLayerVersionResponsePrivate::GetLayerVersionResponsePrivate(
    GetLayerVersionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetLayerVersion response element from \a xml.
 */
void GetLayerVersionResponsePrivate::parseGetLayerVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLayerVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
