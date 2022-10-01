// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createattributegroupresponse.h"
#include "createattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateAttributeGroupResponse
 * \brief The CreateAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry CreateAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::createAttributeGroup
 */

/*!
 * Constructs a CreateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAttributeGroupResponse::CreateAttributeGroupResponse(
        const CreateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new CreateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new CreateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAttributeGroupRequest * CreateAttributeGroupResponse::request() const
{
    Q_D(const CreateAttributeGroupResponse);
    return static_cast<const CreateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry CreateAttributeGroup \a response.
 */
void CreateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateAttributeGroupResponsePrivate
 * \brief The CreateAttributeGroupResponsePrivate class provides private implementation for CreateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a CreateAttributeGroupResponsePrivate object with public implementation \a q.
 */
CreateAttributeGroupResponsePrivate::CreateAttributeGroupResponsePrivate(
    CreateAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry CreateAttributeGroup response element from \a xml.
 */
void CreateAttributeGroupResponsePrivate::parseCreateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
