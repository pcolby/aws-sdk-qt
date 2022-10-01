// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSPACESREQUEST_P_H
#define QTAWS_LISTKEYSPACESREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "listkeyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class ListKeyspacesRequest;

class ListKeyspacesRequestPrivate : public KeyspacesRequestPrivate {

public:
    ListKeyspacesRequestPrivate(const KeyspacesRequest::Action action,
                                   ListKeyspacesRequest * const q);
    ListKeyspacesRequestPrivate(const ListKeyspacesRequestPrivate &other,
                                   ListKeyspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeyspacesRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
