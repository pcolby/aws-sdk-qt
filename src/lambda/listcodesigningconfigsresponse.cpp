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

#include "listcodesigningconfigsresponse.h"
#include "listcodesigningconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListCodeSigningConfigsResponse
 * \brief The ListCodeSigningConfigsResponse class provides an interace for Lambda ListCodeSigningConfigs responses.
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
 * \sa LambdaClient::listCodeSigningConfigs
 */

/*!
 * Constructs a ListCodeSigningConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCodeSigningConfigsResponse::ListCodeSigningConfigsResponse(
        const ListCodeSigningConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListCodeSigningConfigsResponsePrivate(this), parent)
{
    setRequest(new ListCodeSigningConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCodeSigningConfigsRequest * ListCodeSigningConfigsResponse::request() const
{
    return static_cast<const ListCodeSigningConfigsRequest *>(LambdaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Lambda ListCodeSigningConfigs \a response.
 */
void ListCodeSigningConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCodeSigningConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListCodeSigningConfigsResponsePrivate
 * \brief The ListCodeSigningConfigsResponsePrivate class provides private implementation for ListCodeSigningConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListCodeSigningConfigsResponsePrivate object with public implementation \a q.
 */
ListCodeSigningConfigsResponsePrivate::ListCodeSigningConfigsResponsePrivate(
    ListCodeSigningConfigsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListCodeSigningConfigs response element from \a xml.
 */
void ListCodeSigningConfigsResponsePrivate::parseListCodeSigningConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCodeSigningConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
