// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMACREATIONREQUEST_P_H
#define QTAWS_STARTSCHEMACREATIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "startschemacreationrequest.h"

namespace QtAws {
namespace AppSync {

class StartSchemaCreationRequest;

class StartSchemaCreationRequestPrivate : public AppSyncRequestPrivate {

public:
    StartSchemaCreationRequestPrivate(const AppSyncRequest::Action action,
                                   StartSchemaCreationRequest * const q);
    StartSchemaCreationRequestPrivate(const StartSchemaCreationRequestPrivate &other,
                                   StartSchemaCreationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSchemaCreationRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
