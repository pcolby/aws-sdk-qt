// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEREQUEST_P_H
#define QTAWS_GETSLOTTYPEREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getslottyperequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeRequest;

class GetSlotTypeRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetSlotTypeRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetSlotTypeRequest * const q);
    GetSlotTypeRequestPrivate(const GetSlotTypeRequestPrivate &other,
                                   GetSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
