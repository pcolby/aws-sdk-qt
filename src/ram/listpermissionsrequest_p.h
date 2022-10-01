// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_P_H
#define QTAWS_LISTPERMISSIONSREQUEST_P_H

#include "ramrequest_p.h"
#include "listpermissionsrequest.h"

namespace QtAws {
namespace Ram {

class ListPermissionsRequest;

class ListPermissionsRequestPrivate : public RamRequestPrivate {

public:
    ListPermissionsRequestPrivate(const RamRequest::Action action,
                                   ListPermissionsRequest * const q);
    ListPermissionsRequestPrivate(const ListPermissionsRequestPrivate &other,
                                   ListPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
