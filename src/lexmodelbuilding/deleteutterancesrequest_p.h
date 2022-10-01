// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESREQUEST_P_H
#define QTAWS_DELETEUTTERANCESREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deleteutterancesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteUtterancesRequest;

class DeleteUtterancesRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteUtterancesRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteUtterancesRequest * const q);
    DeleteUtterancesRequestPrivate(const DeleteUtterancesRequestPrivate &other,
                                   DeleteUtterancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUtterancesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
