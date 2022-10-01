// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONREQUEST_P_H
#define QTAWS_CREATEBOTVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "createbotversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateBotVersionRequest;

class CreateBotVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    CreateBotVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   CreateBotVersionRequest * const q);
    CreateBotVersionRequestPrivate(const CreateBotVersionRequestPrivate &other,
                                   CreateBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
