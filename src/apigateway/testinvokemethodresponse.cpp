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

#include "testinvokemethodresponse.h"
#include "testinvokemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::TestInvokeMethodResponse
 * \brief The TestInvokeMethodResponse class provides an interace for APIGateway TestInvokeMethod responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::testInvokeMethod
 */

/*!
 * Constructs a TestInvokeMethodResponse object for \a reply to \a request, with parent \a parent.
 */
TestInvokeMethodResponse::TestInvokeMethodResponse(
        const TestInvokeMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new TestInvokeMethodResponsePrivate(this), parent)
{
    setRequest(new TestInvokeMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestInvokeMethodRequest * TestInvokeMethodResponse::request() const
{
    Q_D(const TestInvokeMethodResponse);
    return static_cast<const TestInvokeMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway TestInvokeMethod \a response.
 */
void TestInvokeMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestInvokeMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::TestInvokeMethodResponsePrivate
 * \brief The TestInvokeMethodResponsePrivate class provides private implementation for TestInvokeMethodResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a TestInvokeMethodResponsePrivate object with public implementation \a q.
 */
TestInvokeMethodResponsePrivate::TestInvokeMethodResponsePrivate(
    TestInvokeMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway TestInvokeMethod response element from \a xml.
 */
void TestInvokeMethodResponsePrivate::parseTestInvokeMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
