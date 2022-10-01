// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYSPACEREQUEST_P_H
#define QTAWS_GETKEYSPACEREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "getkeyspacerequest.h"

namespace QtAws {
namespace Keyspaces {

class GetKeyspaceRequest;

class GetKeyspaceRequestPrivate : public KeyspacesRequestPrivate {

public:
    GetKeyspaceRequestPrivate(const KeyspacesRequest::Action action,
                                   GetKeyspaceRequest * const q);
    GetKeyspaceRequestPrivate(const GetKeyspaceRequestPrivate &other,
                                   GetKeyspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
