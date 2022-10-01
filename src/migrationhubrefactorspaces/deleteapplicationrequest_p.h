// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    DeleteApplicationRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
