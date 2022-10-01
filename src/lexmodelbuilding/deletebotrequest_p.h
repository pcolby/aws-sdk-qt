// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTREQUEST_P_H
#define QTAWS_DELETEBOTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deletebotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotRequest;

class DeleteBotRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteBotRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteBotRequest * const q);
    DeleteBotRequestPrivate(const DeleteBotRequestPrivate &other,
                                   DeleteBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
