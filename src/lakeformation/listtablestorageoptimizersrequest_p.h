// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESTORAGEOPTIMIZERSREQUEST_P_H
#define QTAWS_LISTTABLESTORAGEOPTIMIZERSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listtablestorageoptimizersrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListTableStorageOptimizersRequest;

class ListTableStorageOptimizersRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListTableStorageOptimizersRequestPrivate(const LakeFormationRequest::Action action,
                                   ListTableStorageOptimizersRequest * const q);
    ListTableStorageOptimizersRequestPrivate(const ListTableStorageOptimizersRequestPrivate &other,
                                   ListTableStorageOptimizersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTableStorageOptimizersRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
