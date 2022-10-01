// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationresponse.h"
#include "createapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateApplicationResponse
 * \brief The CreateApplicationResponse class provides an interace for ServiceCatalogAppRegistry CreateApplication responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::createApplication
 */

/*!
 * Constructs a CreateApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApplicationResponse::CreateApplicationResponse(
        const CreateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new CreateApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApplicationRequest * CreateApplicationResponse::request() const
{
    Q_D(const CreateApplicationResponse);
    return static_cast<const CreateApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry CreateApplication \a response.
 */
void CreateApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateApplicationResponsePrivate
 * \brief The CreateApplicationResponsePrivate class provides private implementation for CreateApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a CreateApplicationResponsePrivate object with public implementation \a q.
 */
CreateApplicationResponsePrivate::CreateApplicationResponsePrivate(
    CreateApplicationResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry CreateApplication response element from \a xml.
 */
void CreateApplicationResponsePrivate::parseCreateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
