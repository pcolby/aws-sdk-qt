// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDISCOVEREDRESOURCEREQUEST_H
#define QTAWS_ASSOCIATEDISCOVEREDRESOURCEREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateDiscoveredResourceRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT AssociateDiscoveredResourceRequest : public MigrationHubRequest {

public:
    AssociateDiscoveredResourceRequest(const AssociateDiscoveredResourceRequest &other);
    AssociateDiscoveredResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDiscoveredResourceRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
