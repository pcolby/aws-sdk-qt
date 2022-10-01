// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSPACEREQUEST_P_H
#define QTAWS_DELETEKEYSPACEREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "deletekeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class DeleteKeyspaceRequest;

class DeleteKeyspaceRequestPrivate : public KeyspacesRequestPrivate {

public:
    DeleteKeyspaceRequestPrivate(const KeyspacesRequest::Action action,
                                   DeleteKeyspaceRequest * const q);
    DeleteKeyspaceRequestPrivate(const DeleteKeyspaceRequestPrivate &other,
                                   DeleteKeyspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
