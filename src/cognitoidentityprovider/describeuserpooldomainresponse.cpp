// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserpooldomainresponse.h"
#include "describeuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolDomainResponse
 * \brief The DescribeUserPoolDomainResponse class provides an interace for CognitoIdentityProvider DescribeUserPoolDomain responses.
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
 * \sa CognitoIdentityProviderClient::describeUserPoolDomain
 */

/*!
 * Constructs a DescribeUserPoolDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserPoolDomainResponse::DescribeUserPoolDomainResponse(
        const DescribeUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserPoolDomainRequest * DescribeUserPoolDomainResponse::request() const
{
    Q_D(const DescribeUserPoolDomainResponse);
    return static_cast<const DescribeUserPoolDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeUserPoolDomain \a response.
 */
void DescribeUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolDomainResponsePrivate
 * \brief The DescribeUserPoolDomainResponsePrivate class provides private implementation for DescribeUserPoolDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolDomainResponsePrivate object with public implementation \a q.
 */
DescribeUserPoolDomainResponsePrivate::DescribeUserPoolDomainResponsePrivate(
    DescribeUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeUserPoolDomain response element from \a xml.
 */
void DescribeUserPoolDomainResponsePrivate::parseDescribeUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
