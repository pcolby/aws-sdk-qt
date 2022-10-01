// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTVERSIONSREQUEST_P_H
#define QTAWS_GETBOTVERSIONSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotVersionsRequest;

class GetBotVersionsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotVersionsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotVersionsRequest * const q);
    GetBotVersionsRequestPrivate(const GetBotVersionsRequestPrivate &other,
                                   GetBotVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
