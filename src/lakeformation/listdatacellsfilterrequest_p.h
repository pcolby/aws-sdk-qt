// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACELLSFILTERREQUEST_P_H
#define QTAWS_LISTDATACELLSFILTERREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listdatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListDataCellsFilterRequest;

class ListDataCellsFilterRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListDataCellsFilterRequestPrivate(const LakeFormationRequest::Action action,
                                   ListDataCellsFilterRequest * const q);
    ListDataCellsFilterRequestPrivate(const ListDataCellsFilterRequestPrivate &other,
                                   ListDataCellsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataCellsFilterRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
