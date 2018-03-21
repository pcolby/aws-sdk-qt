/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETSLOTTYPEVERSIONSREQUEST_P_H
#define QTAWS_GETSLOTTYPEVERSIONSREQUEST_P_H

#include "lexmodelbuildingservice_p.h"
#include "getslottypeversionsrequest.h"

namespace AWS {

namespace LexModelBuildingService {

class GetSlotTypeVersionsRequest;

class QTAWS_EXPORT GetSlotTypeVersionsRequestPrivate : public LexModelBuildingServicePrivate {

public:
    GetSlotTypeVersionsRequestPrivate(const LexModelBuildingService::Action action,
                                   GetSlotTypeVersionsRequest * const q);
    GetSlotTypeVersionsRequestPrivate(const GetSlotTypeVersionsRequestPrivate &other,
                                   GetSlotTypeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeVersionsRequest)

};

} // namespace LexModelBuildingService
} // namespace AWS

#endif
