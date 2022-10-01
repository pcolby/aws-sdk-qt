// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEAPIKEYREQUEST_P_H
#define QTAWS_CREATEWORKSPACEAPIKEYREQUEST_P_H

#include "grafanarequest_p.h"
#include "createworkspaceapikeyrequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceApiKeyRequest;

class CreateWorkspaceApiKeyRequestPrivate : public GrafanaRequestPrivate {

public:
    CreateWorkspaceApiKeyRequestPrivate(const GrafanaRequest::Action action,
                                   CreateWorkspaceApiKeyRequest * const q);
    CreateWorkspaceApiKeyRequestPrivate(const CreateWorkspaceApiKeyRequestPrivate &other,
                                   CreateWorkspaceApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceApiKeyRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
