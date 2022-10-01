// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopuserimportjobresponse.h"
#include "stopuserimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobResponse
 * \brief The StopUserImportJobResponse class provides an interace for CognitoIdentityProvider StopUserImportJob responses.
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
 * \sa CognitoIdentityProviderClient::stopUserImportJob
 */

/*!
 * Constructs a StopUserImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopUserImportJobResponse::StopUserImportJobResponse(
        const StopUserImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new StopUserImportJobResponsePrivate(this), parent)
{
    setRequest(new StopUserImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopUserImportJobRequest * StopUserImportJobResponse::request() const
{
    Q_D(const StopUserImportJobResponse);
    return static_cast<const StopUserImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider StopUserImportJob \a response.
 */
void StopUserImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopUserImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::StopUserImportJobResponsePrivate
 * \brief The StopUserImportJobResponsePrivate class provides private implementation for StopUserImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a StopUserImportJobResponsePrivate object with public implementation \a q.
 */
StopUserImportJobResponsePrivate::StopUserImportJobResponsePrivate(
    StopUserImportJobResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider StopUserImportJob response element from \a xml.
 */
void StopUserImportJobResponsePrivate::parseStopUserImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopUserImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
