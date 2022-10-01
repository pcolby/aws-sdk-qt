// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTVERSIONSREQUEST_P_H
#define QTAWS_GETINTENTVERSIONSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getintentversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentVersionsRequest;

class GetIntentVersionsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetIntentVersionsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetIntentVersionsRequest * const q);
    GetIntentVersionsRequestPrivate(const GetIntentVersionsRequestPrivate &other,
                                   GetIntentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntentVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
