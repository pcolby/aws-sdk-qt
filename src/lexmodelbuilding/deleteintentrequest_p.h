// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTREQUEST_P_H
#define QTAWS_DELETEINTENTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deleteintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentRequest;

class DeleteIntentRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteIntentRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteIntentRequest * const q);
    DeleteIntentRequestPrivate(const DeleteIntentRequestPrivate &other,
                                   DeleteIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
