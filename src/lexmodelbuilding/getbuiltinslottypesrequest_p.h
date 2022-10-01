// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTINSLOTTYPESREQUEST_P_H
#define QTAWS_GETBUILTINSLOTTYPESREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbuiltinslottypesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinSlotTypesRequest;

class GetBuiltinSlotTypesRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBuiltinSlotTypesRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBuiltinSlotTypesRequest * const q);
    GetBuiltinSlotTypesRequestPrivate(const GetBuiltinSlotTypesRequestPrivate &other,
                                   GetBuiltinSlotTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBuiltinSlotTypesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
