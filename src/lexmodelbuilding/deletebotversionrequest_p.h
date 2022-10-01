// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTVERSIONREQUEST_P_H
#define QTAWS_DELETEBOTVERSIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deletebotversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotVersionRequest;

class DeleteBotVersionRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteBotVersionRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteBotVersionRequest * const q);
    DeleteBotVersionRequestPrivate(const DeleteBotVersionRequestPrivate &other,
                                   DeleteBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
