// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTREQUEST_P_H
#define QTAWS_CREATEBOTREQUEST_P_H

#include "chimerequest_p.h"
#include "createbotrequest.h"

namespace QtAws {
namespace Chime {

class CreateBotRequest;

class CreateBotRequestPrivate : public ChimeRequestPrivate {

public:
    CreateBotRequestPrivate(const ChimeRequest::Action action,
                                   CreateBotRequest * const q);
    CreateBotRequestPrivate(const CreateBotRequestPrivate &other,
                                   CreateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
