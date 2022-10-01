// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTSREQUEST_P_H
#define QTAWS_GETBOTSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotsRequest;

class GetBotsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotsRequest * const q);
    GetBotsRequestPrivate(const GetBotsRequestPrivate &other,
                                   GetBotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
