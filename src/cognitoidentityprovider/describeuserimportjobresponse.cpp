// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserimportjobresponse.h"
#include "describeuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserImportJobResponse
 * \brief The DescribeUserImportJobResponse class provides an interace for CognitoIdentityProvider DescribeUserImportJob responses.
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
 * \sa CognitoIdentityProviderClient::describeUserImportJob
 */

/*!
 * Constructs a DescribeUserImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserImportJobResponse::DescribeUserImportJobResponse(
        const DescribeUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeUserImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserImportJobRequest * DescribeUserImportJobResponse::request() const
{
    Q_D(const DescribeUserImportJobResponse);
    return static_cast<const DescribeUserImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeUserImportJob \a response.
 */
void DescribeUserImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserImportJobResponsePrivate
 * \brief The DescribeUserImportJobResponsePrivate class provides private implementation for DescribeUserImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserImportJobResponsePrivate object with public implementation \a q.
 */
DescribeUserImportJobResponsePrivate::DescribeUserImportJobResponsePrivate(
    DescribeUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeUserImportJob response element from \a xml.
 */
void DescribeUserImportJobResponsePrivate::parseDescribeUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
