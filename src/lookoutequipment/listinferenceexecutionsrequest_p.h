// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEXECUTIONSREQUEST_P_H
#define QTAWS_LISTINFERENCEEXECUTIONSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listinferenceexecutionsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceExecutionsRequest;

class ListInferenceExecutionsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListInferenceExecutionsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListInferenceExecutionsRequest * const q);
    ListInferenceExecutionsRequestPrivate(const ListInferenceExecutionsRequestPrivate &other,
                                   ListInferenceExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInferenceExecutionsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
