// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELSREQUEST_P_H
#define QTAWS_LISTLABELSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listlabelsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelsRequest;

class ListLabelsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListLabelsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListLabelsRequest * const q);
    ListLabelsRequestPrivate(const ListLabelsRequestPrivate &other,
                                   ListLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLabelsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
