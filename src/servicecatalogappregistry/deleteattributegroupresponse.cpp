// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteattributegroupresponse.h"
#include "deleteattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteAttributeGroupResponse
 * \brief The DeleteAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry DeleteAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::deleteAttributeGroup
 */

/*!
 * Constructs a DeleteAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAttributeGroupResponse::DeleteAttributeGroupResponse(
        const DeleteAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new DeleteAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAttributeGroupRequest * DeleteAttributeGroupResponse::request() const
{
    Q_D(const DeleteAttributeGroupResponse);
    return static_cast<const DeleteAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry DeleteAttributeGroup \a response.
 */
void DeleteAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteAttributeGroupResponsePrivate
 * \brief The DeleteAttributeGroupResponsePrivate class provides private implementation for DeleteAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DeleteAttributeGroupResponsePrivate object with public implementation \a q.
 */
DeleteAttributeGroupResponsePrivate::DeleteAttributeGroupResponsePrivate(
    DeleteAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry DeleteAttributeGroup response element from \a xml.
 */
void DeleteAttributeGroupResponsePrivate::parseDeleteAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
