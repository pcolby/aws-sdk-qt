// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTVERSIONREQUEST_P_H
#define QTAWS_CREATEINTENTVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "createintentversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateIntentVersionRequest;

class CreateIntentVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    CreateIntentVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   CreateIntentVersionRequest * const q);
    CreateIntentVersionRequestPrivate(const CreateIntentVersionRequestPrivate &other,
                                   CreateIntentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntentVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
