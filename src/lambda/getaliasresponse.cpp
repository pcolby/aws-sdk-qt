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

#include "getaliasresponse.h"
#include "getaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetAliasResponse
 * \brief The GetAliasResponse class provides an interace for Lambda GetAlias responses.
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
 * \sa LambdaClient::getAlias
 */

/*!
 * Constructs a GetAliasResponse object for \a reply to \a request, with parent \a parent.
 */
GetAliasResponse::GetAliasResponse(
        const GetAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetAliasResponsePrivate(this), parent)
{
    setRequest(new GetAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAliasRequest * GetAliasResponse::request() const
{
    Q_D(const GetAliasResponse);
    return static_cast<const GetAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetAlias \a response.
 */
void GetAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetAliasResponsePrivate
 * \brief The GetAliasResponsePrivate class provides private implementation for GetAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetAliasResponsePrivate object with public implementation \a q.
 */
GetAliasResponsePrivate::GetAliasResponsePrivate(
    GetAliasResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetAlias response element from \a xml.
 */
void GetAliasResponsePrivate::parseGetAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
