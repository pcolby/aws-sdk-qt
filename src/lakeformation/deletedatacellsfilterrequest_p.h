// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACELLSFILTERREQUEST_P_H
#define QTAWS_DELETEDATACELLSFILTERREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "deletedatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteDataCellsFilterRequest;

class DeleteDataCellsFilterRequestPrivate : public LakeFormationRequestPrivate {

public:
    DeleteDataCellsFilterRequestPrivate(const LakeFormationRequest::Action action,
                                   DeleteDataCellsFilterRequest * const q);
    DeleteDataCellsFilterRequestPrivate(const DeleteDataCellsFilterRequestPrivate &other,
                                   DeleteDataCellsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataCellsFilterRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
