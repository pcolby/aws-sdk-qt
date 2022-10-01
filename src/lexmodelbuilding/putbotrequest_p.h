// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTREQUEST_P_H
#define QTAWS_PUTBOTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "putbotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotRequest;

class PutBotRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    PutBotRequestPrivate(const LexModelBuildingRequest::Action action,
                                   PutBotRequest * const q);
    PutBotRequestPrivate(const PutBotRequestPrivate &other,
                                   PutBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
