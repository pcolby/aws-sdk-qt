// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTREQUEST_P_H
#define QTAWS_GETINTENTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentRequest;

class GetIntentRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetIntentRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetIntentRequest * const q);
    GetIntentRequestPrivate(const GetIntentRequestPrivate &other,
                                   GetIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
