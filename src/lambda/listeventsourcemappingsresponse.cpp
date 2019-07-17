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

#include "listeventsourcemappingsresponse.h"
#include "listeventsourcemappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListEventSourceMappingsResponse
 * \brief The ListEventSourceMappingsResponse class provides an interace for Lambda ListEventSourceMappings responses.
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
 * \sa LambdaClient::listEventSourceMappings
 */

/*!
 * Constructs a ListEventSourceMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventSourceMappingsResponse::ListEventSourceMappingsResponse(
        const ListEventSourceMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListEventSourceMappingsResponsePrivate(this), parent)
{
    setRequest(new ListEventSourceMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventSourceMappingsRequest * ListEventSourceMappingsResponse::request() const
{
    Q_D(const ListEventSourceMappingsResponse);
    return static_cast<const ListEventSourceMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda ListEventSourceMappings \a response.
 */
void ListEventSourceMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventSourceMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListEventSourceMappingsResponsePrivate
 * \brief The ListEventSourceMappingsResponsePrivate class provides private implementation for ListEventSourceMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListEventSourceMappingsResponsePrivate object with public implementation \a q.
 */
ListEventSourceMappingsResponsePrivate::ListEventSourceMappingsResponsePrivate(
    ListEventSourceMappingsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListEventSourceMappings response element from \a xml.
 */
void ListEventSourceMappingsResponsePrivate::parseListEventSourceMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSourceMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
