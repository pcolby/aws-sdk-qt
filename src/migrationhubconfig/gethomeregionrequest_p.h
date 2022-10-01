// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOMEREGIONREQUEST_P_H
#define QTAWS_GETHOMEREGIONREQUEST_P_H

#include "migrationhubconfigrequest_p.h"
#include "gethomeregionrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class GetHomeRegionRequest;

class GetHomeRegionRequestPrivate : public MigrationHubConfigRequestPrivate {

public:
    GetHomeRegionRequestPrivate(const MigrationHubConfigRequest::Action action,
                                   GetHomeRegionRequest * const q);
    GetHomeRegionRequestPrivate(const GetHomeRegionRequestPrivate &other,
                                   GetHomeRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHomeRegionRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
