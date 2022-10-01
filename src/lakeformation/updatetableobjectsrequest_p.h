// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEOBJECTSREQUEST_P_H
#define QTAWS_UPDATETABLEOBJECTSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "updatetableobjectsrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableObjectsRequest;

class UpdateTableObjectsRequestPrivate : public LakeFormationRequestPrivate {

public:
    UpdateTableObjectsRequestPrivate(const LakeFormationRequest::Action action,
                                   UpdateTableObjectsRequest * const q);
    UpdateTableObjectsRequestPrivate(const UpdateTableObjectsRequestPrivate &other,
                                   UpdateTableObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTableObjectsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
