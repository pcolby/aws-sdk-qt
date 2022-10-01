// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateattributegroupresponse.h"
#include "updateattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupResponse
 * \brief The UpdateAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry UpdateAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::updateAttributeGroup
 */

/*!
 * Constructs a UpdateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAttributeGroupResponse::UpdateAttributeGroupResponse(
        const UpdateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new UpdateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAttributeGroupRequest * UpdateAttributeGroupResponse::request() const
{
    Q_D(const UpdateAttributeGroupResponse);
    return static_cast<const UpdateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry UpdateAttributeGroup \a response.
 */
void UpdateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupResponsePrivate
 * \brief The UpdateAttributeGroupResponsePrivate class provides private implementation for UpdateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a UpdateAttributeGroupResponsePrivate object with public implementation \a q.
 */
UpdateAttributeGroupResponsePrivate::UpdateAttributeGroupResponsePrivate(
    UpdateAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry UpdateAttributeGroup response element from \a xml.
 */
void UpdateAttributeGroupResponsePrivate::parseUpdateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
