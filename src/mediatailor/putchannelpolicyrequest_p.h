// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELPOLICYREQUEST_P_H
#define QTAWS_PUTCHANNELPOLICYREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "putchannelpolicyrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutChannelPolicyRequest;

class PutChannelPolicyRequestPrivate : public MediaTailorRequestPrivate {

public:
    PutChannelPolicyRequestPrivate(const MediaTailorRequest::Action action,
                                   PutChannelPolicyRequest * const q);
    PutChannelPolicyRequestPrivate(const PutChannelPolicyRequestPrivate &other,
                                   PutChannelPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutChannelPolicyRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
