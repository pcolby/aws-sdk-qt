// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSONCANCELREQUEST_P_H
#define QTAWS_DELETEOBJECTSONCANCELREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "deleteobjectsoncancelrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteObjectsOnCancelRequest;

class DeleteObjectsOnCancelRequestPrivate : public LakeFormationRequestPrivate {

public:
    DeleteObjectsOnCancelRequestPrivate(const LakeFormationRequest::Action action,
                                   DeleteObjectsOnCancelRequest * const q);
    DeleteObjectsOnCancelRequestPrivate(const DeleteObjectsOnCancelRequestPrivate &other,
                                   DeleteObjectsOnCancelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObjectsOnCancelRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
