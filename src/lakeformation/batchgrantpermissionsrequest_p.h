// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGRANTPERMISSIONSREQUEST_P_H
#define QTAWS_BATCHGRANTPERMISSIONSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "batchgrantpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchGrantPermissionsRequest;

class BatchGrantPermissionsRequestPrivate : public LakeFormationRequestPrivate {

public:
    BatchGrantPermissionsRequestPrivate(const LakeFormationRequest::Action action,
                                   BatchGrantPermissionsRequest * const q);
    BatchGrantPermissionsRequestPrivate(const BatchGrantPermissionsRequestPrivate &other,
                                   BatchGrantPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGrantPermissionsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
