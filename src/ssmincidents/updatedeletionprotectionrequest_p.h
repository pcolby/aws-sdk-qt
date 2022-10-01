// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDELETIONPROTECTIONREQUEST_P_H
#define QTAWS_UPDATEDELETIONPROTECTIONREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updatedeletionprotectionrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateDeletionProtectionRequest;

class UpdateDeletionProtectionRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateDeletionProtectionRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateDeletionProtectionRequest * const q);
    UpdateDeletionProtectionRequestPrivate(const UpdateDeletionProtectionRequestPrivate &other,
                                   UpdateDeletionProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeletionProtectionRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
