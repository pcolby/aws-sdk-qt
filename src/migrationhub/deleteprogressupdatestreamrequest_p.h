// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRESSUPDATESTREAMREQUEST_P_H
#define QTAWS_DELETEPROGRESSUPDATESTREAMREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "deleteprogressupdatestreamrequest.h"

namespace QtAws {
namespace MigrationHub {

class DeleteProgressUpdateStreamRequest;

class DeleteProgressUpdateStreamRequestPrivate : public MigrationHubRequestPrivate {

public:
    DeleteProgressUpdateStreamRequestPrivate(const MigrationHubRequest::Action action,
                                   DeleteProgressUpdateStreamRequest * const q);
    DeleteProgressUpdateStreamRequestPrivate(const DeleteProgressUpdateStreamRequestPrivate &other,
                                   DeleteProgressUpdateStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProgressUpdateStreamRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
