// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTPERMISSIONSREQUEST_P_H
#define QTAWS_LISTACCOUNTPERMISSIONSREQUEST_P_H

#include "inspector2request_p.h"
#include "listaccountpermissionsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListAccountPermissionsRequest;

class ListAccountPermissionsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListAccountPermissionsRequestPrivate(const Inspector2Request::Action action,
                                   ListAccountPermissionsRequest * const q);
    ListAccountPermissionsRequestPrivate(const ListAccountPermissionsRequestPrivate &other,
                                   ListAccountPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountPermissionsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
