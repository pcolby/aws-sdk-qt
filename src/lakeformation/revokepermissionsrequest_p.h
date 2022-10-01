// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEPERMISSIONSREQUEST_P_H
#define QTAWS_REVOKEPERMISSIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "revokepermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class RevokePermissionsRequest;

class RevokePermissionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    RevokePermissionsRequestPrivate(const LakeFormationRequest::Action action,
                                   RevokePermissionsRequest * const q);
    RevokePermissionsRequestPrivate(const RevokePermissionsRequestPrivate &other,
                                   RevokePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokePermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
