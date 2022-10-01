// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTSREQUEST_P_H
#define QTAWS_GETBUILTININTENTSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbuiltinintentsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentsRequest;

class GetBuiltinIntentsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBuiltinIntentsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBuiltinIntentsRequest * const q);
    GetBuiltinIntentsRequestPrivate(const GetBuiltinIntentsRequestPrivate &other,
                                   GetBuiltinIntentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBuiltinIntentsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
