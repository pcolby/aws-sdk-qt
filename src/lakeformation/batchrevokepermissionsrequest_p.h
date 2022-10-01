// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREVOKEPERMISSIONSREQUEST_P_H
#define QTAWS_BATCHREVOKEPERMISSIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "batchrevokepermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchRevokePermissionsRequest;

class BatchRevokePermissionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    BatchRevokePermissionsRequestPrivate(const LakeFormationRequest::Action action,
                                   BatchRevokePermissionsRequest * const q);
    BatchRevokePermissionsRequestPrivate(const BatchRevokePermissionsRequestPrivate &other,
                                   BatchRevokePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchRevokePermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
