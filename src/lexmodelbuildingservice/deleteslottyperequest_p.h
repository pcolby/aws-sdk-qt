/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
