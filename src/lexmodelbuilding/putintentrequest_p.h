// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTENTREQUEST_P_H
#define QTAWS_PUTINTENTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "putintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutIntentRequest;

class PutIntentRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    PutIntentRequestPrivate(const LexModelBuildingRequest::Action action,
                                   PutIntentRequest * const q);
    PutIntentRequestPrivate(const PutIntentRequestPrivate &other,
                                   PutIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
