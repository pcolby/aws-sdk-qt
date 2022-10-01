// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEVENTSREQUEST_P_H
#define QTAWS_LISTINFERENCEEVENTSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listinferenceeventsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceEventsRequest;

class ListInferenceEventsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListInferenceEventsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListInferenceEventsRequest * const q);
    ListInferenceEventsRequestPrivate(const ListInferenceEventsRequestPrivate &other,
                                   ListInferenceEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInferenceEventsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
