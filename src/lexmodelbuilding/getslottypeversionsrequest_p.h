// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEVERSIONSREQUEST_P_H
#define QTAWS_GETSLOTTYPEVERSIONSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getslottypeversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeVersionsRequest;

class GetSlotTypeVersionsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetSlotTypeVersionsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetSlotTypeVersionsRequest * const q);
    GetSlotTypeVersionsRequestPrivate(const GetSlotTypeVersionsRequestPrivate &other,
                                   GetSlotTypeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
