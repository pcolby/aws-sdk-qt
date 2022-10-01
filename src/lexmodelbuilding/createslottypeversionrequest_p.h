// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEVERSIONREQUEST_P_H
#define QTAWS_CREATESLOTTYPEVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "createslottypeversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateSlotTypeVersionRequest;

class CreateSlotTypeVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    CreateSlotTypeVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   CreateSlotTypeVersionRequest * const q);
    CreateSlotTypeVersionRequestPrivate(const CreateSlotTypeVersionRequestPrivate &other,
                                   CreateSlotTypeVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSlotTypeVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
