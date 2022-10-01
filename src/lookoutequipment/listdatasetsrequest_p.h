// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDatasetsRequest;

class ListDatasetsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListDatasetsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListDatasetsRequest * const q);
    ListDatasetsRequestPrivate(const ListDatasetsRequestPrivate &other,
                                   ListDatasetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
