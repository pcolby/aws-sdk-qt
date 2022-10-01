// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEAPIKEYREQUEST_P_H
#define QTAWS_DELETEWORKSPACEAPIKEYREQUEST_P_H

#include "grafanarequest_p.h"
#include "deleteworkspaceapikeyrequest.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceApiKeyRequest;

class DeleteWorkspaceApiKeyRequestPrivate : public GrafanaRequestPrivate {

public:
    DeleteWorkspaceApiKeyRequestPrivate(const GrafanaRequest::Action action,
                                   DeleteWorkspaceApiKeyRequest * const q);
    DeleteWorkspaceApiKeyRequestPrivate(const DeleteWorkspaceApiKeyRequestPrivate &other,
                                   DeleteWorkspaceApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceApiKeyRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
