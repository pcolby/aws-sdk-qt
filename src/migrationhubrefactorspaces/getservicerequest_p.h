// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEREQUEST_P_H
#define QTAWS_GETSERVICEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "getservicerequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetServiceRequest;

class GetServiceRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    GetServiceRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   GetServiceRequest * const q);
    GetServiceRequestPrivate(const GetServiceRequestPrivate &other,
                                   GetServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
