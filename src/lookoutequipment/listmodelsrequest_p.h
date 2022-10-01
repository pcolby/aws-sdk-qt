// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSREQUEST_P_H
#define QTAWS_LISTMODELSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listmodelsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListModelsRequest;

class ListModelsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListModelsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListModelsRequest * const q);
    ListModelsRequestPrivate(const ListModelsRequestPrivate &other,
                                   ListModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
