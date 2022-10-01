// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    GetApplicationRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
