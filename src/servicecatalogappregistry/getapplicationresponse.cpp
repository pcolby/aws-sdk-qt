// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationresponse.h"
#include "getapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetApplicationResponse
 * \brief The GetApplicationResponse class provides an interace for ServiceCatalogAppRegistry GetApplication responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getApplication
 */

/*!
 * Constructs a GetApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationResponse::GetApplicationResponse(
        const GetApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new GetApplicationResponsePrivate(this), parent)
{
    setRequest(new GetApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationRequest * GetApplicationResponse::request() const
{
    Q_D(const GetApplicationResponse);
    return static_cast<const GetApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry GetApplication \a response.
 */
void GetApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetApplicationResponsePrivate
 * \brief The GetApplicationResponsePrivate class provides private implementation for GetApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetApplicationResponsePrivate object with public implementation \a q.
 */
GetApplicationResponsePrivate::GetApplicationResponsePrivate(
    GetApplicationResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry GetApplication response element from \a xml.
 */
void GetApplicationResponsePrivate::parseGetApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
