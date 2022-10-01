// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUTTERANCESVIEWREQUEST_P_H
#define QTAWS_GETUTTERANCESVIEWREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getutterancesviewrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetUtterancesViewRequest;

class GetUtterancesViewRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetUtterancesViewRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetUtterancesViewRequest * const q);
    GetUtterancesViewRequestPrivate(const GetUtterancesViewRequestPrivate &other,
                                   GetUtterancesViewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUtterancesViewRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
