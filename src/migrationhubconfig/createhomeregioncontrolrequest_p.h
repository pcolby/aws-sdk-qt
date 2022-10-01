// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOMEREGIONCONTROLREQUEST_P_H
#define QTAWS_CREATEHOMEREGIONCONTROLREQUEST_P_H

#include "migrationhubconfigrequest_p.h"
#include "createhomeregioncontrolrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class CreateHomeRegionControlRequest;

class CreateHomeRegionControlRequestPrivate : public MigrationHubConfigRequestPrivate {

public:
    CreateHomeRegionControlRequestPrivate(const MigrationHubConfigRequest::Action action,
                                   CreateHomeRegionControlRequest * const q);
    CreateHomeRegionControlRequestPrivate(const CreateHomeRegionControlRequestPrivate &other,
                                   CreateHomeRegionControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHomeRegionControlRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
