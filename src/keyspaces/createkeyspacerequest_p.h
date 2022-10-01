// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSPACEREQUEST_P_H
#define QTAWS_CREATEKEYSPACEREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "createkeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class CreateKeyspaceRequest;

class CreateKeyspaceRequestPrivate : public KeyspacesRequestPrivate {

public:
    CreateKeyspaceRequestPrivate(const KeyspacesRequest::Action action,
                                   CreateKeyspaceRequest * const q);
    CreateKeyspaceRequestPrivate(const CreateKeyspaceRequestPrivate &other,
                                   CreateKeyspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
