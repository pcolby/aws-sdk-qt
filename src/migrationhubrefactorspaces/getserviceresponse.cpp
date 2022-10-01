// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceresponse.h"
#include "getserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetServiceResponse
 * \brief The GetServiceResponse class provides an interace for MigrationHubRefactorSpaces GetService responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::getService
 */

/*!
 * Constructs a GetServiceResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceResponse::GetServiceResponse(
        const GetServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new GetServiceResponsePrivate(this), parent)
{
    setRequest(new GetServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceRequest * GetServiceResponse::request() const
{
    Q_D(const GetServiceResponse);
    return static_cast<const GetServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces GetService \a response.
 */
void GetServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetServiceResponsePrivate
 * \brief The GetServiceResponsePrivate class provides private implementation for GetServiceResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a GetServiceResponsePrivate object with public implementation \a q.
 */
GetServiceResponsePrivate::GetServiceResponsePrivate(
    GetServiceResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces GetService response element from \a xml.
 */
void GetServiceResponsePrivate::parseGetServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
