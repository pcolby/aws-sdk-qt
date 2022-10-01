// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createserviceresponse.h"
#include "createserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateServiceResponse
 * \brief The CreateServiceResponse class provides an interace for MigrationHubRefactorSpaces CreateService responses.
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
 * \sa MigrationHubRefactorSpacesClient::createService
 */

/*!
 * Constructs a CreateServiceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServiceResponse::CreateServiceResponse(
        const CreateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new CreateServiceResponsePrivate(this), parent)
{
    setRequest(new CreateServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServiceRequest * CreateServiceResponse::request() const
{
    Q_D(const CreateServiceResponse);
    return static_cast<const CreateServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces CreateService \a response.
 */
void CreateServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateServiceResponsePrivate
 * \brief The CreateServiceResponsePrivate class provides private implementation for CreateServiceResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a CreateServiceResponsePrivate object with public implementation \a q.
 */
CreateServiceResponsePrivate::CreateServiceResponsePrivate(
    CreateServiceResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces CreateService response element from \a xml.
 */
void CreateServiceResponsePrivate::parseCreateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
