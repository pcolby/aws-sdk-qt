// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateattributegroupresponse.h"
#include "disassociateattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupResponse
 * \brief The DisassociateAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry DisassociateAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::disassociateAttributeGroup
 */

/*!
 * Constructs a DisassociateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateAttributeGroupResponse::DisassociateAttributeGroupResponse(
        const DisassociateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new DisassociateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateAttributeGroupRequest * DisassociateAttributeGroupResponse::request() const
{
    Q_D(const DisassociateAttributeGroupResponse);
    return static_cast<const DisassociateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry DisassociateAttributeGroup \a response.
 */
void DisassociateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupResponsePrivate
 * \brief The DisassociateAttributeGroupResponsePrivate class provides private implementation for DisassociateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DisassociateAttributeGroupResponsePrivate object with public implementation \a q.
 */
DisassociateAttributeGroupResponsePrivate::DisassociateAttributeGroupResponsePrivate(
    DisassociateAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry DisassociateAttributeGroup response element from \a xml.
 */
void DisassociateAttributeGroupResponsePrivate::parseDisassociateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
