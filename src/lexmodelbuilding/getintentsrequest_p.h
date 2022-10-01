// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTSREQUEST_P_H
#define QTAWS_GETINTENTSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getintentsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentsRequest;

class GetIntentsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetIntentsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetIntentsRequest * const q);
    GetIntentsRequestPrivate(const GetIntentsRequestPrivate &other,
                                   GetIntentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntentsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
