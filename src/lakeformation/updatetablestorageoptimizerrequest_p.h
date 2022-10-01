// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLESTORAGEOPTIMIZERREQUEST_P_H
#define QTAWS_UPDATETABLESTORAGEOPTIMIZERREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "updatetablestorageoptimizerrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableStorageOptimizerRequest;

class UpdateTableStorageOptimizerRequestPrivate : public LakeFormationRequestPrivate {

public:
    UpdateTableStorageOptimizerRequestPrivate(const LakeFormationRequest::Action action,
                                   UpdateTableStorageOptimizerRequest * const q);
    UpdateTableStorageOptimizerRequestPrivate(const UpdateTableStorageOptimizerRequestPrivate &other,
                                   UpdateTableStorageOptimizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTableStorageOptimizerRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
