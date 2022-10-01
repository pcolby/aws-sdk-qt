// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEAPPLIEDSCHEMAREQUEST_P_H
#define QTAWS_UPGRADEAPPLIEDSCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "upgradeappliedschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradeAppliedSchemaRequest;

class UpgradeAppliedSchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpgradeAppliedSchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpgradeAppliedSchemaRequest * const q);
    UpgradeAppliedSchemaRequestPrivate(const UpgradeAppliedSchemaRequestPrivate &other,
                                   UpgradeAppliedSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpgradeAppliedSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
