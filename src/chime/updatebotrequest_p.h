// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTREQUEST_P_H
#define QTAWS_UPDATEBOTREQUEST_P_H

#include "chimerequest_p.h"
#include "updatebotrequest.h"

namespace QtAws {
namespace Chime {

class UpdateBotRequest;

class UpdateBotRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateBotRequestPrivate(const ChimeRequest::Action action,
                                   UpdateBotRequest * const q);
    UpdateBotRequestPrivate(const UpdateBotRequestPrivate &other,
                                   UpdateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBotRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
