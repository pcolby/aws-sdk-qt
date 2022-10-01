// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEREQUEST_P_H
#define QTAWS_DELETESLOTTYPEREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deleteslottyperequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeRequest;

class DeleteSlotTypeRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteSlotTypeRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteSlotTypeRequest * const q);
    DeleteSlotTypeRequestPrivate(const DeleteSlotTypeRequestPrivate &other,
                                   DeleteSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlotTypeRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
