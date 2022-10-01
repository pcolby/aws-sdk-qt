// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTREQUEST_P_H
#define QTAWS_GETBOTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotRequest;

class GetBotRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotRequest * const q);
    GetBotRequestPrivate(const GetBotRequestPrivate &other,
                                   GetBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
