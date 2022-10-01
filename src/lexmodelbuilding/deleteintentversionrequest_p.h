// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTVERSIONREQUEST_P_H
#define QTAWS_DELETEINTENTVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deleteintentversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentVersionRequest;

class DeleteIntentVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteIntentVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteIntentVersionRequest * const q);
    DeleteIntentVersionRequestPrivate(const DeleteIntentVersionRequestPrivate &other,
                                   DeleteIntentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntentVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
