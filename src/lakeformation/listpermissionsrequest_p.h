// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_P_H
#define QTAWS_LISTPERMISSIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListPermissionsRequest;

class ListPermissionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListPermissionsRequestPrivate(const LakeFormationRequest::Action action,
                                   ListPermissionsRequest * const q);
    ListPermissionsRequestPrivate(const ListPermissionsRequestPrivate &other,
                                   ListPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
