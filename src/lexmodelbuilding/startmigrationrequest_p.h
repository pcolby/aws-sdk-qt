// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMIGRATIONREQUEST_P_H
#define QTAWS_STARTMIGRATIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "startmigrationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class StartMigrationRequest;

class StartMigrationRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    StartMigrationRequestPrivate(const LexModelBuildingRequest::Action action,
                                   StartMigrationRequest * const q);
    StartMigrationRequestPrivate(const StartMigrationRequestPrivate &other,
                                   StartMigrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMigrationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
