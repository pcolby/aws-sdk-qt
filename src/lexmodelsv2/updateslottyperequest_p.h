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

#ifndef QTAWS_UPDATESLOTTYPEREQUEST_P_H
#define QTAWS_UPDATESLOTTYPEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotTypeRequest;

class QTAWS_EXPORT UpdateSlotTypeRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateSlotTypeRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateSlotTypeRequest * const q);
    UpdateSlotTypeRequestPrivate(const UpdateSlotTypeRequestPrivate &other,
                                   UpdateSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
