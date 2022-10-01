// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEVERSIONREQUEST_P_H
#define QTAWS_DELETESLOTTYPEVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deleteslottypeversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeVersionRequest;

class DeleteSlotTypeVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteSlotTypeVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteSlotTypeVersionRequest * const q);
    DeleteSlotTypeVersionRequestPrivate(const DeleteSlotTypeVersionRequestPrivate &other,
                                   DeleteSlotTypeVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSlotTypeVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
