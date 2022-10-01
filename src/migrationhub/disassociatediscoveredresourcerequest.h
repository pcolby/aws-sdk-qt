// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDISCOVEREDRESOURCEREQUEST_H
#define QTAWS_DISASSOCIATEDISCOVEREDRESOURCEREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateDiscoveredResourceRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT DisassociateDiscoveredResourceRequest : public MigrationHubRequest {

public:
    DisassociateDiscoveredResourceRequest(const DisassociateDiscoveredResourceRequest &other);
    DisassociateDiscoveredResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDiscoveredResourceRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
