// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testinvokemethodresponse.h"
#include "testinvokemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::TestInvokeMethodResponse
 * \brief The TestInvokeMethodResponse class provides an interace for ApiGateway TestInvokeMethod responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::testInvokeMethod
 */

/*!
 * Constructs a TestInvokeMethodResponse object for \a reply to \a request, with parent \a parent.
 */
TestInvokeMethodResponse::TestInvokeMethodResponse(
        const TestInvokeMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new TestInvokeMethodResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway TestInvokeMethod \a response.
 */
void TestInvokeMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestInvokeMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::TestInvokeMethodResponsePrivate
 * \brief The TestInvokeMethodResponsePrivate class provides private implementation for TestInvokeMethodResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a TestInvokeMethodResponsePrivate object with public implementation \a q.
 */
TestInvokeMethodResponsePrivate::TestInvokeMethodResponsePrivate(
    TestInvokeMethodResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway TestInvokeMethod response element from \a xml.
 */
void TestInvokeMethodResponsePrivate::parseTestInvokeMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
