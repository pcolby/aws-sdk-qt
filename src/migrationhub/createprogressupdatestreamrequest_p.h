// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRESSUPDATESTREAMREQUEST_P_H
#define QTAWS_CREATEPROGRESSUPDATESTREAMREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "createprogressupdatestreamrequest.h"

namespace QtAws {
namespace MigrationHub {

class CreateProgressUpdateStreamRequest;

class CreateProgressUpdateStreamRequestPrivate : public MigrationHubRequestPrivate {

public:
    CreateProgressUpdateStreamRequestPrivate(const MigrationHubRequest::Action action,
                                   CreateProgressUpdateStreamRequest * const q);
    CreateProgressUpdateStreamRequestPrivate(const CreateProgressUpdateStreamRequestPrivate &other,
                                   CreateProgressUpdateStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProgressUpdateStreamRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
