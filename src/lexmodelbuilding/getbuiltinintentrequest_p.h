// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTREQUEST_P_H
#define QTAWS_GETBUILTININTENTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbuiltinintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentRequest;

class GetBuiltinIntentRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBuiltinIntentRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBuiltinIntentRequest * const q);
    GetBuiltinIntentRequestPrivate(const GetBuiltinIntentRequestPrivate &other,
                                   GetBuiltinIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBuiltinIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
