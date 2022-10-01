// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserpoolclientresponse.h"
#include "describeuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientResponse
 * \brief The DescribeUserPoolClientResponse class provides an interace for CognitoIdentityProvider DescribeUserPoolClient responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeUserPoolClient
 */

/*!
 * Constructs a DescribeUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserPoolClientResponse::DescribeUserPoolClientResponse(
        const DescribeUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserPoolClientRequest * DescribeUserPoolClientResponse::request() const
{
    Q_D(const DescribeUserPoolClientResponse);
    return static_cast<const DescribeUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeUserPoolClient \a response.
 */
void DescribeUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientResponsePrivate
 * \brief The DescribeUserPoolClientResponsePrivate class provides private implementation for DescribeUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolClientResponsePrivate object with public implementation \a q.
 */
DescribeUserPoolClientResponsePrivate::DescribeUserPoolClientResponsePrivate(
    DescribeUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeUserPoolClient response element from \a xml.
 */
void DescribeUserPoolClientResponsePrivate::parseDescribeUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
