// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDISCOVEREDRESOURCERESPONSE_H
#define QTAWS_ASSOCIATEDISCOVEREDRESOURCERESPONSE_H

#include "migrationhubresponse.h"
#include "associatediscoveredresourcerequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateDiscoveredResourceResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT AssociateDiscoveredResourceResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    AssociateDiscoveredResourceResponse(const AssociateDiscoveredResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDiscoveredResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDiscoveredResourceResponse)
    Q_DISABLE_COPY(AssociateDiscoveredResourceResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
