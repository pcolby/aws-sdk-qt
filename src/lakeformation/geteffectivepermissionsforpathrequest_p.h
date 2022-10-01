// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPERMISSIONSFORPATHREQUEST_P_H
#define QTAWS_GETEFFECTIVEPERMISSIONSFORPATHREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "geteffectivepermissionsforpathrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetEffectivePermissionsForPathRequest;

class GetEffectivePermissionsForPathRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetEffectivePermissionsForPathRequestPrivate(const LakeFormationRequest::Action action,
                                   GetEffectivePermissionsForPathRequest * const q);
    GetEffectivePermissionsForPathRequestPrivate(const GetEffectivePermissionsForPathRequestPrivate &other,
                                   GetEffectivePermissionsForPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEffectivePermissionsForPathRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
