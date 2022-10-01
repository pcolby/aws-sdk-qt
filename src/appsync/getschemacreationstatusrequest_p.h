// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMACREATIONSTATUSREQUEST_P_H
#define QTAWS_GETSCHEMACREATIONSTATUSREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getschemacreationstatusrequest.h"

namespace QtAws {
namespace AppSync {

class GetSchemaCreationStatusRequest;

class GetSchemaCreationStatusRequestPrivate : public AppSyncRequestPrivate {

public:
    GetSchemaCreationStatusRequestPrivate(const AppSyncRequest::Action action,
                                   GetSchemaCreationStatusRequest * const q);
    GetSchemaCreationStatusRequestPrivate(const GetSchemaCreationStatusRequestPrivate &other,
                                   GetSchemaCreationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaCreationStatusRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
