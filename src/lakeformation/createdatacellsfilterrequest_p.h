// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACELLSFILTERREQUEST_P_H
#define QTAWS_CREATEDATACELLSFILTERREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "createdatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class CreateDataCellsFilterRequest;

class CreateDataCellsFilterRequestPrivate : public LakeFormationRequestPrivate {

public:
    CreateDataCellsFilterRequestPrivate(const LakeFormationRequest::Action action,
                                   CreateDataCellsFilterRequest * const q);
    CreateDataCellsFilterRequestPrivate(const CreateDataCellsFilterRequestPrivate &other,
                                   CreateDataCellsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataCellsFilterRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
