// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTPERMISSIONSREQUEST_P_H
#define QTAWS_GRANTPERMISSIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "grantpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GrantPermissionsRequest;

class GrantPermissionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GrantPermissionsRequestPrivate(const LakeFormationRequest::Action action,
                                   GrantPermissionsRequest * const q);
    GrantPermissionsRequestPrivate(const GrantPermissionsRequestPrivate &other,
                                   GrantPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GrantPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
