// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHATTOKENREQUEST_P_H
#define QTAWS_CREATECHATTOKENREQUEST_P_H

#include "ivschatrequest_p.h"
#include "createchattokenrequest.h"

namespace QtAws {
namespace IvsChat {

class CreateChatTokenRequest;

class CreateChatTokenRequestPrivate : public IvsChatRequestPrivate {

public:
    CreateChatTokenRequestPrivate(const IvsChatRequest::Action action,
                                   CreateChatTokenRequest * const q);
    CreateChatTokenRequestPrivate(const CreateChatTokenRequestPrivate &other,
                                   CreateChatTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChatTokenRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
