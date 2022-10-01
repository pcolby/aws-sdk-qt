// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCESCHEDULERSREQUEST_P_H
#define QTAWS_LISTINFERENCESCHEDULERSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listinferenceschedulersrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceSchedulersRequest;

class ListInferenceSchedulersRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListInferenceSchedulersRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListInferenceSchedulersRequest * const q);
    ListInferenceSchedulersRequestPrivate(const ListInferenceSchedulersRequestPrivate &other,
                                   ListInferenceSchedulersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInferenceSchedulersRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
