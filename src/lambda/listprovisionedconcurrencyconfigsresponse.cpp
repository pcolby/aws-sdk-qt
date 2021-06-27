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

#include "listprovisionedconcurrencyconfigsresponse.h"
#include "listprovisionedconcurrencyconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListProvisionedConcurrencyConfigsResponse
 * \brief The ListProvisionedConcurrencyConfigsResponse class provides an interace for Lambda ListProvisionedConcurrencyConfigs responses.
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
 * \sa LambdaClient::listProvisionedConcurrencyConfigs
 */

/*!
 * Constructs a ListProvisionedConcurrencyConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisionedConcurrencyConfigsResponse::ListProvisionedConcurrencyConfigsResponse(
        const ListProvisionedConcurrencyConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListProvisionedConcurrencyConfigsResponsePrivate(this), parent)
{
    setRequest(new ListProvisionedConcurrencyConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisionedConcurrencyConfigsRequest * ListProvisionedConcurrencyConfigsResponse::request() const
{
    return static_cast<const ListProvisionedConcurrencyConfigsRequest *>(LambdaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Lambda ListProvisionedConcurrencyConfigs \a response.
 */
void ListProvisionedConcurrencyConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProvisionedConcurrencyConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListProvisionedConcurrencyConfigsResponsePrivate
 * \brief The ListProvisionedConcurrencyConfigsResponsePrivate class provides private implementation for ListProvisionedConcurrencyConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListProvisionedConcurrencyConfigsResponsePrivate object with public implementation \a q.
 */
ListProvisionedConcurrencyConfigsResponsePrivate::ListProvisionedConcurrencyConfigsResponsePrivate(
    ListProvisionedConcurrencyConfigsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListProvisionedConcurrencyConfigs response element from \a xml.
 */
void ListProvisionedConcurrencyConfigsResponsePrivate::parseListProvisionedConcurrencyConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisionedConcurrencyConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
