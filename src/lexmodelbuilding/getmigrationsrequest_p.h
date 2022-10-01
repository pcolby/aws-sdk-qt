// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONSREQUEST_P_H
#define QTAWS_GETMIGRATIONSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getmigrationsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationsRequest;

class GetMigrationsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetMigrationsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetMigrationsRequest * const q);
    GetMigrationsRequestPrivate(const GetMigrationsRequestPrivate &other,
                                   GetMigrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMigrationsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
