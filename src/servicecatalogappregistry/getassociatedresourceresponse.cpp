// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassociatedresourceresponse.h"
#include "getassociatedresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceResponse
 * \brief The GetAssociatedResourceResponse class provides an interace for ServiceCatalogAppRegistry GetAssociatedResource responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAssociatedResource
 */

/*!
 * Constructs a GetAssociatedResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssociatedResourceResponse::GetAssociatedResourceResponse(
        const GetAssociatedResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new GetAssociatedResourceResponsePrivate(this), parent)
{
    setRequest(new GetAssociatedResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssociatedResourceRequest * GetAssociatedResourceResponse::request() const
{
    Q_D(const GetAssociatedResourceResponse);
    return static_cast<const GetAssociatedResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry GetAssociatedResource \a response.
 */
void GetAssociatedResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssociatedResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceResponsePrivate
 * \brief The GetAssociatedResourceResponsePrivate class provides private implementation for GetAssociatedResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAssociatedResourceResponsePrivate object with public implementation \a q.
 */
GetAssociatedResourceResponsePrivate::GetAssociatedResourceResponsePrivate(
    GetAssociatedResourceResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry GetAssociatedResource response element from \a xml.
 */
void GetAssociatedResourceResponsePrivate::parseGetAssociatedResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssociatedResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
