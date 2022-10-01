// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSLOTTYPEREQUEST_P_H
#define QTAWS_PUTSLOTTYPEREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "putslottyperequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutSlotTypeRequest;

class PutSlotTypeRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    PutSlotTypeRequestPrivate(const LexModelBuildingRequest::Action action,
                                   PutSlotTypeRequest * const q);
    PutSlotTypeRequestPrivate(const PutSlotTypeRequestPrivate &other,
                                   PutSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSlotTypeRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
