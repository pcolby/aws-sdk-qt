// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattributegroupsforapplicationresponse.h"
#include "listattributegroupsforapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationResponse
 * \brief The ListAttributeGroupsForApplicationResponse class provides an interace for ServiceCatalogAppRegistry ListAttributeGroupsForApplication responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroupsForApplication
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttributeGroupsForApplicationResponse::ListAttributeGroupsForApplicationResponse(
        const ListAttributeGroupsForApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new ListAttributeGroupsForApplicationResponsePrivate(this), parent)
{
    setRequest(new ListAttributeGroupsForApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttributeGroupsForApplicationRequest * ListAttributeGroupsForApplicationResponse::request() const
{
    Q_D(const ListAttributeGroupsForApplicationResponse);
    return static_cast<const ListAttributeGroupsForApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry ListAttributeGroupsForApplication \a response.
 */
void ListAttributeGroupsForApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttributeGroupsForApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationResponsePrivate
 * \brief The ListAttributeGroupsForApplicationResponsePrivate class provides private implementation for ListAttributeGroupsForApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationResponsePrivate object with public implementation \a q.
 */
ListAttributeGroupsForApplicationResponsePrivate::ListAttributeGroupsForApplicationResponsePrivate(
    ListAttributeGroupsForApplicationResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry ListAttributeGroupsForApplication response element from \a xml.
 */
void ListAttributeGroupsForApplicationResponsePrivate::parseListAttributeGroupsForApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttributeGroupsForApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
