// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONREQUEST_P_H
#define QTAWS_GETMIGRATIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getmigrationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationRequest;

class GetMigrationRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetMigrationRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetMigrationRequest * const q);
    GetMigrationRequestPrivate(const GetMigrationRequestPrivate &other,
                                   GetMigrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMigrationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
