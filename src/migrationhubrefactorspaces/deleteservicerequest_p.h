// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_P_H
#define QTAWS_DELETESERVICEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "deleteservicerequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteServiceRequest;

class DeleteServiceRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    DeleteServiceRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   DeleteServiceRequest * const q);
    DeleteServiceRequestPrivate(const DeleteServiceRequestPrivate &other,
                                   DeleteServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
