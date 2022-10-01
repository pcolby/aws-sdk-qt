// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPESREQUEST_P_H
#define QTAWS_GETSLOTTYPESREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getslottypesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypesRequest;

class GetSlotTypesRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetSlotTypesRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetSlotTypesRequest * const q);
    GetSlotTypesRequestPrivate(const GetSlotTypesRequestPrivate &other,
                                   GetSlotTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSlotTypesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
