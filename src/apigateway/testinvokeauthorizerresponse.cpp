// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testinvokeauthorizerresponse.h"
#include "testinvokeauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::TestInvokeAuthorizerResponse
 * \brief The TestInvokeAuthorizerResponse class provides an interace for ApiGateway TestInvokeAuthorizer responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::testInvokeAuthorizer
 */

/*!
 * Constructs a TestInvokeAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
TestInvokeAuthorizerResponse::TestInvokeAuthorizerResponse(
        const TestInvokeAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new TestInvokeAuthorizerResponsePrivate(this), parent)
{
    setRequest(new TestInvokeAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestInvokeAuthorizerRequest * TestInvokeAuthorizerResponse::request() const
{
    Q_D(const TestInvokeAuthorizerResponse);
    return static_cast<const TestInvokeAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway TestInvokeAuthorizer \a response.
 */
void TestInvokeAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestInvokeAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::TestInvokeAuthorizerResponsePrivate
 * \brief The TestInvokeAuthorizerResponsePrivate class provides private implementation for TestInvokeAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a TestInvokeAuthorizerResponsePrivate object with public implementation \a q.
 */
TestInvokeAuthorizerResponsePrivate::TestInvokeAuthorizerResponsePrivate(
    TestInvokeAuthorizerResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway TestInvokeAuthorizer response element from \a xml.
 */
void TestInvokeAuthorizerResponsePrivate::parseTestInvokeAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
