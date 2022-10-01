// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEALIASESREQUEST_P_H
#define QTAWS_LISTROLEALIASESREQUEST_P_H

#include "iotrequest_p.h"
#include "listrolealiasesrequest.h"

namespace QtAws {
namespace IoT {

class ListRoleAliasesRequest;

class ListRoleAliasesRequestPrivate : public IoTRequestPrivate {

public:
    ListRoleAliasesRequestPrivate(const IoTRequest::Action action,
                                   ListRoleAliasesRequest * const q);
    ListRoleAliasesRequestPrivate(const ListRoleAliasesRequestPrivate &other,
                                   ListRoleAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoleAliasesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
